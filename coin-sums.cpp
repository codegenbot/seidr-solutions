```
#include <vector>
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins = {1, 2, 3, 4};
    map<int, int> coin_counts;
    for (int i = 0; i < coins.size(); ++i) {
        if (n >= coins[i]) {
            coin_counts[coins[i]] += n / coins[i];
            n -= coins[i] * (n / coins[i]);
        }
    }
    for (auto& c : coin_counts) {
        cout << c.first << ":" << c.second << endl;
    }
}
```