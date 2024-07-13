#include <iostream>

int pennies = 0;
int nickles = 0;
int dimes = 0;
int quarters = 0;

int cents;
std::cout << "Enter the number of cents: ";
std::cin >> cents;

pennies = cents % 1;
cents /= 1;

nickles = cents / 5;
cents %= 5;

dimes = cents / 10;
cents %= 10;

quarters = cents / 25;
cents %= 25;

std::cout << "Quarters: " << quarters << std::endl;
std::cout << "Dimes: " << dimes << std::endl;
std::cout << "Nickles: " << nickles << std::endl;
std::cout << "Pennies: " << cents << std::endl;

return 0;