```cpp
#include <iostream>

int main() {
    int cents;

    // Input the amount of money in cents.
    std::cout << "Enter an amount of money in cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    int nickles = remainingCents / 5;
    remainingCents %= 5;
    int pennies = remainingCents;

    // Print the number of coins.
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}