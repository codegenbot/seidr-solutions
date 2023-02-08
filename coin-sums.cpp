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
int coin_change(int n, int *cent) {
    int *dp = new int[n + 1];
    int *path = new int[n + 1];
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
        for(int j = 0; j < 4; j++) {
            if(i - cent[j] >= 0 && dp[i - cent[j]] != INT_MAX) {
                if(dp[i] > dp[i - cent[j]] + 1) {
                    dp[i] = dp[i - cent[j]] + 1;
                    path[i] = j;
                }
            }
        }
    }
    int *cnt = new int[4];
    int tmp = n;
    while(tmp) {
        cnt[path[tmp]]++;
        tmp -= cent[path[tmp]];
    }
    cout << cnt[0] << endl;
    cout << cnt[1] << endl;
    cout << cnt[2] << endl;
    cout << cnt[3] << endl;
    return 0;
}
int main() {
    int n;
    cin >> n;
    int cent[4] = {1, 5, 10, 25};
    coin_change(n, cent);
    return 0;
}
