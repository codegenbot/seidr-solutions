#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents % 5;
    cents /= 5;

    int nickels = cents % 2;
    cents /= 2;

    int dimes = cents % 2;
    cents /= 2;

    int quarters = cents;

    int totalCoins = quarters + dimes + nickels + pennies;

    std::cout << totalCoins << std::endl;
    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}