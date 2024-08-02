#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents / 1;
    int remainder = cents % 1;

    int nickels = remainder / 5;
    remainder %= 5;

    int dimes = remainder / 10;
    remainder %= 10;

    int quarters = remainder / 25;

    std::cout << pennies << "\n";
    std::cout << nickels << "\n";
    std::cout << dimes << "\n";
    std::cout << quarters << "\n";

    return 0;
}