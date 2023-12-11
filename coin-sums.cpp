#include <iostream>
#include <vector>

std::vector<int> coinSums(int cents) {
    std::vector<int> coins(4, 0);
    coins[3] = cents / 25;
    cents %= 25;
    coins[2] = cents / 10;
    cents %= 10;
    coins[1] = cents / 5;
    cents %= 5;
    coins[0] = cents;
    return coins;
}

int main() {
    int cents;
    std::cin >> cents;
    std::vector<int> coins = coinSums(cents);
    for (int i = 0; i < coins.size(); i++) {
        std::cout << coins[i] << std::endl;
    }
    return 0;
}