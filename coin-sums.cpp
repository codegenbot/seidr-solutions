#include <iostream>
#include <vector>

int main() {
    std::vector<int> coinCounts = {0, 0, 0, 0}; // quarters, dimes, nickels, pennies

    std::cout << "Enter the number of cents: ";
    int cents;
    std::cin >> cents;

    while (cents >= 25) {
        ++coinCounts[0]; // update quarters count
        cents -= 25;
    }

    while (cents >= 10) {
        ++coinCounts[1]; // update dimes count
        cents -= 10;
    }

    while (cents >= 5) {
        ++coinCounts[2]; // update nickles count
        cents -= 5;
    }

    coinCounts[3] = cents; // update pennies count

    std::cout << "Quarters: " << coinCounts[0] << std::endl;
    std::cout << "Dimes: " << coinCounts[1] << std::endl;
    std::cout << "Nickles: " << coinCounts[2] << std::endl;
    std::cout << "Pennies: " << coinCounts[3] << std::endl;

    return 0;
}