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
1.001\n1.0\n1
output:
2.001
input:
100.0\n99.999\n20
output:
3999.599534511501
input:
100.0\n1.0\n20
output:
102.02020201974588
input:
15.319\n5.635\n1
output:
20.954
input:
2.176\n1.787\n1
output:
3.963
*/
int main() {
    double h, h2;
    int n;
    while(cin >> h >> h2 >> n) {
        double bounciness = h2 / h;
        double distance = 0;
        for(int i = 0; i < n; i++) {
            distance += h;
            h *= bounciness;
        }
        printf("%.5f\n", distance);
    }
    return 0;
}
