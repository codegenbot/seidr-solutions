#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int remaining = cents;
    int quarters = remaining / 25;
    remaining %= 25; 

    int dimes = remaining / 10;
    remaining %= 10; 

    int nickles = remaining / 5;
    remaining %= 5; 

    int pennies = remaining;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}