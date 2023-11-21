#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    // Calculate the number of quarters
    int quarters = cents / 25;
    cents %= 25;

    // Calculate the number of dimes
    int dimes = cents / 10;
    cents %= 10;

    // Calculate the number of nickels
    int nickels = cents / 5;
    cents %= 5;

    // The remaining cents will be the number of pennies
    int pennies = cents;

    // Output the number of each type of coin
    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}