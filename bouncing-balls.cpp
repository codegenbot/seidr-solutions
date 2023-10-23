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

    double high, first, number;
    while (cin >> high >> first >> number) {
        double bounciness_index = first / high;
        double total_distance = 0;

        // if number is 0:
        // we have no bounces so total distance is 0.

        // if number is 1:
        // first bounce distance is bounciness_index * high
        // next bounce distance is 0.

        double next_bounce_distance = high * bounciness_index;
        // if number is 2:
        // first bounce distance is bounciness_index * high
        // next bounce distance is bounciness_index * next_bounce_distance

        // if number is 3:
        // first bounce distance is bounciness_index * high
        // next bounce distance is bounciness_index * next_bounce_distance
        // next bounce distance is bounciness_index * next_bounce_distance

        // in general, the i-th bounce distance is bounciness_index * bounciness_index ^ (i-1) * high

        while (number > 0) {
            total_distance += bounciness_index * next_bounce_distance;
            next_bounce_distance *= bounciness_index;
            number--;
        }

        printf("%.6f\n", total_distance);
    }
    return 0;
}
