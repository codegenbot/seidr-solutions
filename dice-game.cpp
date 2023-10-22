#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Peter has an n-sided die and Colin has an m-sided die. 
If they both roll their dice at the same time, return the probability that Peter rolls strictly higher than Colin.
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
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF) {
        //枚举
        double ans = 0;
        if (n > m) {
            for (int x = m + 1; x <= n; x++) {
                ans += (double) 1 / n;
            }
        }else if (n < m) {
            for (int x = n + 1; x <= m; x++) {
                ans += (double) 1 / m;
            }
        }
        ans = 1 - ans;
        printf("%.2f\n", ans);
    }
}
