#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    int remaining_cents = cents % 25; 
    int dimes = remaining_cents / 10;
    remaining_cents %= 10; 
    int nickles = remaining_cents / 5;
    remaining_cents %= 5; 
    int pennies = remaining_cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}