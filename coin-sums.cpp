#include <iostream>
#include <vector>

int main() {
    int cents;
    std::cin >> cents;

    std::vector<int> coins = {25, 10, 5, 1};
    std::vector<int> coinCounts(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            coinCounts[i]++;
            cents -= coins[i];
        }
    }

    std::cout << coinCounts[3] << " quarters" << std::endl;
    if(coinCounts[2] > 0) {
        std::cout << coinCounts[2] << " dimes" << std::endl;
    } else {
        std::cout << "0 dimes" << std::endl;
    }
    if(cents > 4 || (cents == 4 && coinCounts[2] >= 3)) {
        std::cout << "no pennies" << std::endl;
    } else {
        int pennyCount = cents;
        while(pennyCount >= 5) {
            pennyCount -= 5;
            coinCounts[1]++;
        }
        if(coinCounts[1] > 0 || pennyCount > 0) {
            std::cout << coinCounts[1] << " nickels, " << pennyCount << " pennies" << std::endl;
        } else {
            std::cout << "no coins" << std::endl;
        }
    }

    return 0;
}