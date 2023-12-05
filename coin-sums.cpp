```
#include <iostream>
#include <vector>
using namespace std;

int get_coin_sums(const vector<int>& coins, int total) {
    int counts[4] = {0};
    for (int i = 0; i < coins.size(); i++) {
        if (coins[i] <= total) {
            counts[coins[i]]++;
        }
    }
    return counts[1] + counts[5] + counts[10] + counts[25];
}
```