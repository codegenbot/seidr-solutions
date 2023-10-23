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
Peter has an n-sided die and Colin has an m-sided die. If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
For example,
input:
1
2
output:
0.0
input:
2
1
output:
0.5
input:
99
100
output:
0.49
input:
100
99
output:
0.5
input:
1
100
output:
0.0
*/
double colin(int m, int n) {
    double dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++) {
        dp[i][1] = 1.0 / n;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 2; j <= m; j++) {
            for(int k = 1; k <= n; k++) {
                if(k < i) {
                    dp[i][j] += dp[k][j-1] / n;
                }
            }
        }
    }
    double ans = 0.0;
    for(int i = 1; i <= n; i++) {
        ans += dp[i][m];
    }
    return ans;
}
int main() {
    int m, n;
    while(cin >> n >> m) {
        cout << colin(m, n) << endl;
    }
    return 0;
}
