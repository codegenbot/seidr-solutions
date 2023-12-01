#include <iostream>

int main() {
    int cents = 0;
    std::cin >> cents;

    int quarters = cents / 25;
    cents -= (quarters * 25);

    int dimes = cents / 10;
    cents -= (dimes * 10);

    int nickels = cents / 5;
    cents -= (nickels * 5);

    int pennies = cents;

    int totalCoins = quarters + dimes + nickels + pennies;

    std::cout << totalCoins << std::endl;
    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}