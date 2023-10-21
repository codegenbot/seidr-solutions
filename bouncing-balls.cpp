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
http://www.datagenetics.com/blog/july42013/index.html
Given a starting height and a height after the ﬁrst bounce of a dropped ball, calculate the bounciness index (height of ﬁrst bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces.
For example,
input:
2
1.0
1
output:
2.005
input:
5
1
1
output:
5.094
input:
5
1
20
output:
39.014
input:
5
0
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
    double h, h1, n;
    while (cin >> h >> h1 >> n) {
        double r = h1 / h;
        double sum = h1;
        for (int i = 1; i < n; i++) {
            sum += h * pow(r, i + 1);
        }
        printf("%.6f\n", sum);
    }
    return 0;
}
