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
int main() {
    int cents;
    cin >> cents;
    vector<int> coins = { 1, 5, 10, 25 };
    int numCoins[4] = { 0 };
    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            numCoins[i]++;
        }
    }
    cout << "Number of pennies: " << numCoins[0] << endl;
    cout << "Number of nickles: " << numCoins[1] << endl;
    cout << "Number of dimes: " << numCoins[2] << endl;
    cout << "Number of quarters: " << numCoins[3] << endl;
    return 0;
}