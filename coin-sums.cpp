#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = std::min(cents / 25, int(1));
    cents %= 25;

    int dimes = std::min(cents / 10, int(quarters));
    cents %= 10;

    int nickles = std::min(cents / 5, int(dimes));
    cents %= 5;

    int pennies = cents;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}