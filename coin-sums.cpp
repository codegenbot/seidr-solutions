#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int pennies = cents % 25;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << (pennies / 10) << "\n";
    std::cout << "Nickels: " << (pennies / 5) << "\n";
    std::cout << "Pennies: " << pennies % 5 << "\n";

    return 0;
}