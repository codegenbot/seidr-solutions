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
    int n, m, i, j;
    double ans = 0, k = 0;
    while (cin >> n >> m) {
        if (n > m) {
            ans = 1;
        }
        else if (n == 0 || m == 0) {
            break;
        }
        else if (n == m) {
            ans = 0;
        }
        else {
            for (i = n + 1; i <= m; i++) {
                k = 1;
                for (j = 1; j <= i; j++) {
                    k = k * j;
                }
                ans += 1 / k;
            }
        }
        printf("%.2f\n", ans);
        ans = 0;
    }
    return 0;
}
