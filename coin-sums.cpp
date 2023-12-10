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
/*
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/
vector<int> coinSums(vector<int> coins, int amount) {
    vector<int> result;
    for (int i = 0; i < coins.size(); i++) {
        if (coins[i] <= amount) {
            result.push_back(amount / coins[i]);
            amount %= coins[i];
        } else {
            result.push_back(0);
        }
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    vector<int> coins = {1, 5, 10, 25};
    vector<int> result = coinSums(coins, n);
    cout << result[0] << " " << result[1] << " " << result[2] << " " << result[3] << endl;
    return 0;
}