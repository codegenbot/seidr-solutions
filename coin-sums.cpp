#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    remaining %= 10;

    int nickels = remaining / 5;
    remaining %= 5;

    int pennies = remaining;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickels << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}