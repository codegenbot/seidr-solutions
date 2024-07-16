#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents % 5;
    int nickles = cents / 5;
    cents %= 5;

    int dimes = cents / 10;
    cents %= 10;

    int quarters = cents / 25;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}