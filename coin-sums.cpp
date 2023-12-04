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
        counts[coin] += coin;
    }
    cout << counts[0] << " " << counts[1] << " " << counts[2] << " " << counts[3] << endl;
    return 0;
}