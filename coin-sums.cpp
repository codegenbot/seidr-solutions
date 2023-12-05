```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins = { 1, 5, 10, 25 };
    vector<int> counts(4);
    for (int i = 0; i < n; i++) {
        int coin = coins[i % 4] <= i ? 1 : 0;
        if (coin == 1) {
            counts[i / 50]++;
            counts[i / 25] += 3;
            counts[i / 10] += 6;
            counts[i / 5] += 9;
        } else if (coin == 5) {
            counts[i / 5] += 5;
            counts[i / 2] += 3;
            counts[i / 1] += 6;
            counts[i / 0.5] += 9;
        } else if (coin == 10) {
            counts[i / 10] += 4;
            counts[i / 2] += 3;
            counts[i / 1] += 6;
            counts[i / 0.5] += 9;
        } else if (coin == 25) {
            counts[i / 25]++;
            counts[i / 10] += 3;
            counts[i / 5] += 6;
            counts[i / 2] += 9;
        }
    }
    cout << counts[0] << " " << counts[1] << " " << counts[2] << " " << counts[3] << endl;
    return 0;
}
```