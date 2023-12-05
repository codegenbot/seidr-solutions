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
    int remaining = n;
    for (int i = 0; i < n; i++) {
        int largestCoin = -1;
        for (int j = 0; j < coins.size(); j++) {
            if (coins[j] <= remaining) {
                largestCoin = j;
                break;
            }
        }
        if (largestCoin == -1) {
            cout << "No solution found" << endl;
            return 0;
        }
        counts[largestCoin]++;
        remaining -= coins[largestCoin];
    }
    cout << counts[0] << " " << counts[1] << " " << counts[2] << " " << counts[3] << endl;
    return 0;
}