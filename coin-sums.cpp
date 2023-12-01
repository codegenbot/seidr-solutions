#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents % 5;
    int nickels = cents % 10 / 5;
    int dimes = cents % 25 / 10;
    int quarters = cents / 25;

    int totalCoins = quarters + dimes + nickels + pennies;

    std::cout << totalCoins << std::endl;
    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}