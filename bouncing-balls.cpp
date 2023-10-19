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
#define MOD 1000000007
#define MAX 1000000000
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
double per(int bounces) {
    if (bounces == 1) {
        return 2.0;
    }
    if (bounces % 2 == 0) {
        return pow(bounces/2,2.0);
    }
    return bounces*(bounces-1)+1;
}
int main() {
    double h,b;
    int bounces,distance;
    cin>>h;
    cin>>b;
    cin>>bounces;
    cout<<h*b*per(bounces)/bounces<<endl;
}
