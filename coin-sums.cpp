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
int main() {
    int n;
    cin >> n;
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
        if (i - 1 >= 0)
            dp[i] = min(dp[i], dp[i - 1] + 1);
        if (i - 5 >= 0)
            dp[i] = min(dp[i], dp[i - 5] + 1);
        if (i - 10 >= 0)
            dp[i] = min(dp[i], dp[i - 10] + 1);
        if (i - 25 >= 0)
            dp[i] = min(dp[i], dp[i - 25] + 1);
    }
    cout << dp[n] << endl;
    return 0;
}
