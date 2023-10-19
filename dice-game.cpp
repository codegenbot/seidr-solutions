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
double peterColinDice(const int n, const int m) {
    const int dim = (max(n, m) + 1) * (max(n, m) + 1);
    double map[dim];
    double nd[dim], md[dim];
    for (int i = 0; i < dim; i++) {
        map[i] = 0;
        nd[i] = 1;
        md[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        nd[i] = 1.0 / n;
    }
    for (int i = 0; i < m; i++) {
        md[i] = 1.0 / m;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            map[j * (n + 1) + i] = nd[i] * md[j];
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << map[j * (n + 1) + i] << endl;
        }
    }
    double res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > j) {
                res += map[j * (n + 1) + i];
            }
        }
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << peterColinDice(n, m) << endl;
    return 0;
}
