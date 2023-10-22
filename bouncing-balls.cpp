#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdlib.h>
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
//计算弹跳次数
double getBounciness(double start, double height, int times) {
    double res = 0;
    double bounciness = height / start;
    for(int i = 0; i < times; i++) {
        res += start * pow(bounciness, i);
    }
    return res;
}
int main() {
    double start = 0, height = 0;
    int times = 0;
    while(cin >> start >> height >> times) {
        double res = getBounciness(start, height, times);
        printf("%.6f\n", res);
    }
    return 0;
}
