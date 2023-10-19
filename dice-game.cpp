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
double getprob(int n, int m, map<int, double>&mapn, map<int, double>&mapm) {
    if (n > m) {
        return 1.0;
    } else if (n < m) {
        return 0.0;
    } else {
        if (mapn[n] == mapm[m]) {
            return 0.5;
        } else if (mapn[n] > mapm[m]) {
            return 1.0;
        } else {
            return 0.0;
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    map<int, double>mapn, mapm;
    for (int i = 1;  i <= n; i++) {
        mapn[i] = 1.0 / n;
    }
    for (int i = 1;  i <= m; i++) {
        mapm[i] = 1.0 / m;
    }
    cout << fixed << getprob(n, m, mapn, mapm) << endl;
    return 0;
}
