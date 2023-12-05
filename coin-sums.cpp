```
#include <iostream>
#include <vector>
#include <map>

int get_coin_sums(std::vector<int>& coins, int total) {
    std::map<int, int> counts = {{1, 0}, {5, 0}, {10, 0}, {25, 0}};
    for (auto coin : coins) {
        if (coin <= total) {
            counts[coin] += 1;
        }
    }
    return {counts[1], counts[5], counts[10], counts[25]};
}
```
This code is a C++ implementation of the problem you described. It uses a map to store the number of each type of coin, and iterates over the coins vector to determine which coins to use in the combination that adds up to the total amount. The function returns a vector containing the counts of each type of coin.

Note that this code assumes that the input vector `coins` is sorted in ascending order, and that the values in the vector are all positive integers. If these assumptions do not hold, you may need to modify the code accordingly.