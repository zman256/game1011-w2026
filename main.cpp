#include <iostream>
#include <string>

int main()
{
	int health = 100;
	float mana = 50.75f;
	double speed = 25.3245234598023485902;
	unsigned long long defense = 18446744073709551615;
	std::cout << "Player has " << health << " health." << std::endl;
	std::cout << "Player has " << mana << " mana." << std::endl;
	std::cout << "Player has " << speed << " speed." << std::endl;
	std::cout << "Defense before overflow: " << defense << std::endl;
	defense++;
	std::cout << "Defense after overflow: " << defense << std::endl;
	const char* message = "Hello world!";	// String literal --> array of characters
	std::string message2 = "Hello";
	message2 += " world!";					// C++ strings (std::string) allow you to combine text
	std::cout << message << std::endl;
	std::cout << message2 << std::endl;

	return 0;
}
