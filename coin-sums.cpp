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
1000
input:
2
output:
2000
input:
3
output:
3000
input:
4
output:
4000
input:
5
output:
0100
*/

#define MAX_SIZE 1000
int coins[4] = {1, 5, 10, 25};
int result[4];

int dp[MAX_SIZE][4];

int findMinCoins(int cents) {
    int i, j;
    for (i = 1; i <= cents; i++) {
        for (j = 0; j < 4; j++) {
            if (i - coins[j] >= 0) {
                dp[i][j] = min(dp[i][j - 1], dp[i - coins[j]][j] + 1);
            } else {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }
    
    return dp[cents][3];
}

int main() {
    int cents;
    cin >> cents;
    cout << findMinCoins(cents) << endl;
    return 0;
}
