#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainingCents = cents;
    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}