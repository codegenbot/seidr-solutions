#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int nickles = cents / 5;
    int pennies = cents % 5;

    int quarters = cents / 25;
    int dimes = (cents % 25) / 10;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}