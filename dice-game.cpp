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
double peterColinDice(int n, int m) {
    // 均值公式 高斯求和
    double res = (n + 1.0) /(n+m+1); //比如相同是0 大1是1.0+m
    if (res < 0) {
        return 0.0;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << peterColinDice(n, m) << endl;
    return 0;
}
