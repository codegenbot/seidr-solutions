#include <iostream>
#include <vector>

int main() {
    int cents;
    std::cin >> cents;

    std::vector<int> coins = {25, 10, 5, 1};
    std::vector<int> coinCounts(4);

    for (int i = 3; i >= 0; i--) {
        while (cents >= coins[i]) {
            coinCounts[i]++;
            cents -= coins[i];
        }
    }

    std::cout << coinCounts[3] << " Quarters" << std::endl;
    std::cout << coinCounts[2] << " Dimes" << std::endl;
    std::cout << coinCounts[1] << " Nickels" << std::endl;
    std::cout << coinCounts[0] << " Pennies" << std::endl;

    return 0;
}