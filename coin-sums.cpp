#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents / 1;
    int remaining_cents = cents % 100;
    int nickels = remaining_cents / 25;
    remaining_cents %= 25;
    int dimes = remaining_cents / 10;
    remaining_cents %= 10;
    int quarters = remaining_cents / 5;

    std::cout << pennies << "\n";
    std::cout << nickels << "\n";
    std::cout << dimes << "\n";
    std::cout << quarters << "\n";

    return 0;
}