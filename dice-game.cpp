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
    while (scanf("%d%d", &n, &m) != EOF) {
        double sum = 100.0;
        double ans = 0;
        for (int peter = 1; peter <= n; peter++) {
            for (int colin = 1; colin <= m; colin++) {
                if (peter > colin) {
                    ans += sum;
                }
                sum -= 100.0 / m;
            }
            sum = 100.0;
        }
        printf("%.3lf\n", ans / n / m);
    }
    return 0;
}
