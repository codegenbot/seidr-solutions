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
    freopen("data.txt", "r", stdin);
    int n;
    int m;
    cin >> n >> m;
    double res = 0.0;
    for (int i = 1; i < n; i++) {
        double interval = 1.0 * i / n;
        double a = (ceil(interval * m) - interval * m) / m;
        double b = (interval * m - floor(interval * m)) / m;
        res += a + b;
    }
    printf("%.5f\n", res);
    return 0;
}
