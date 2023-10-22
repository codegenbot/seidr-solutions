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
double cal(int a, int b) {
    if (a > b) return cal(b, a);
    double res = 0;
    for (int i = 1; i < a; i++) {
        res += (double)i / (i + a) * 1.0 * (a - i) / (a + b -i);
    }
    return res;
}
int main() { 
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.6lf\n", cal(a, b));
}
