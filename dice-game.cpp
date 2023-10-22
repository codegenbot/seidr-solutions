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

double calPer(int n, int m) {
    if (n < m) {
        return 0.0;
    }
    double **dp = new double*[n+1];
    for(int i = 0; i <= n; i++) {
        dp[i] = new double[m+1];
        memset(dp[i], 0, sizeof(double)*(m+1));
    }
    for(int i = 1; i <= m; i++) {
        dp[i][m] = 1.0 / m;
    }
    for(int i = m + 1; i <= n; i++) {
        double sum = 0;
        for(int j = 1; j <= m; j++) {
            sum += dp[i-j][m];
        }
        for(int j = 1; j <= m; j++) {
            dp[i][m] += sum / m;
        }
    }
    return dp[n][m];
}

int main() {
    int n, m;
    while(cin >> n >> m) {
        cout << calPer(n, m) << endl;
    }
    return 0;
}
