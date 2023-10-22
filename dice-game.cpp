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

// n>m
double solve(int n, int m) {
    double dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<=m; i++) dp[1][i] = 1.0/m;
    for(int i=2; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            for(int k=0; k<=j; k++) {
                dp[i][j] += dp[i-1][k];
            }
            dp[i][j] /= m;
        }
    }
    double res = 0.0;
    for(int i=0; i<=m; i++) {
        res += dp[n][i];
    }
    return res;
}
int main() {
    int n, m;
    while(cin>>n>>m) {
        if(n>m) cout<<solve(n, m)<<endl;
        else cout<<1-solve(m, n)<<endl;
    }
    return 0;
}
