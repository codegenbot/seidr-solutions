#include <iostream>
#include <vector>

int main() {
    std::vector<int> coinCounts = {0, 0, 0, 0}; // quarters, dimes, nickels, pennies

    std::cout << "Enter the number of cents: ";
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remainder = cents % 25;

    int dimes = remainder / 10;
    remainder %= 10;

    int nickels = remainder / 5;
    remainder %= 5;

    coinCounts[0] = quarters;
    coinCounts[1] = dimes;
    coinCounts[2] = nickels;
    coinCounts[3] = remainder;

    std::cout << "Quarters: " << coinCounts[0] << std::endl;
    if(coinCounts[1] > 0)
        std::cout << "Dimes: " << coinCounts[1] << std::endl;
    else
        std::cout << "Dimes: 0" << std::endl;

    if(coinCounts[2] > 0)
        std::cout << "Nickles: " << coinCounts[2] << std::endl;
    else
        std::cout << "Nickles: 0" << std::endl;

    std::cout << "Pennies: " << coinCounts[3] << std::endl;

    return 0;
}