```
#include <iostream>

int get_coin_sums(const std::vector<int>& coins, int total) {
    const int counts[4] = {0};

    for (int coin : coins) {
        if (coin <= total) {
            counts[coin - 1]++;
        }
    }

    return counts;
}
```