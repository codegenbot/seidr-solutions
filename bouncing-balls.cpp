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
int main() {
    string start, first, num;
    getline(cin, start);
    getline(cin, first);
    getline(cin, num);
    double s, f, n;
    sscanf(start.c_str(), "%lf", &s);
    sscanf(first.c_str(), "%lf", &f);
    sscanf(num.c_str(), "%lf", &n);
    double res = 0;
    double bounciness = f / s;
    res += s;
    for (int i = 0; i < (int)n; i++) {
        res += s;
        s *= bounciness;
    }
    printf("%.3lf\n", res);
    return 0;
}
