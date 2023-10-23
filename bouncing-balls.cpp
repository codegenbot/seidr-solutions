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
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
1.001
1.0
1
output:
2.001
input:
100.0
99.999
20
output:
3999.599534511501
input:
100.0
1.0
20
output:
102.02020201974588
input:
15.319
5.635
1
output:
20.954
input:
2.176
1.787
1
output:
3.963
*/
double bounciness(double s, double b, int n) {
    if(n == 1) return s + b;
    return bounciness(s, b, n - 1) + bounciness(b, s * b / (s + b), n - 1);
}

int main() {
    double s, b;
    int n;
    while(scanf("%lf%lf%d", &s, &b, &n) != EOF) {
        printf("%.3lf\n", bounciness(s, b, n));
    }
    return 0;
}
