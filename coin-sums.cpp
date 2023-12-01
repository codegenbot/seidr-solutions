#include <iostream>

int main() {
    int cents = 0;
    std::cin >> cents;

    int quarters = (cents + 12) / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickels = remainingCents / 5;
    int pennies = remainingCents % 5;

    int totalCoins = quarters + dimes + nickels + pennies;

    std::cout << totalCoins << std::endl;
    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}