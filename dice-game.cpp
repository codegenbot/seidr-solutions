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
int main() {
  int p, c, i, j;
  double dp[101][101], dq[101][101];
  while(cin>>p>>c) {
    for (i = 1; i <= p; i++) {
      for (j = 1; j <= c; j++) {
        if (i == 1 && j == 1) {
          dp[i][j] = 0;
        } else if (i == 1) {
          dp[i][j] = 1.0 * (j - 2) / j;
        } else if (j == 1) {
          dp[i][j] = 1.0;
        } else {
          dp[i][j] = 1.0 * i / (i + j - 1);
        }
      }
    }
    // dp[i][j] = the probability of win against i sided, j sided die
    dq[1][1] = 0;
    for (i = 2; i <= p; i++) {
      for (j = 2; j <= c; j++) {
        dq[i][j] = 1.0 * (i - 1) / (i + j - 1) * dq[i - 1][j] + 1.0 * (j - 1) / (i + j - 1) * dp[i][j - 1];
      }
    }
    printf("%.2f\n", dq[p][c]);
  }
  return 0;
}
