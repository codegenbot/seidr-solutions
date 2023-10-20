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
    int n, m;
    cin >> n >> m;
    double a = 1.0 / n, b = 1.0 / m, sum = 0;
    if (n > m) {
        for (int i = m + 1; i <= n; ++i) {
            sum += a / (1 - b * (i - 1));
        }
    } else if (n == m) {
        sum = 0.5;
    } else {
        for (int i = n + 1; i <= m; ++i) {
            sum += b / (1 - a * (i - 1));
        }
        sum = 1 - sum;
    }
    printf("%.3f\n", sum);
    return 0;
}
