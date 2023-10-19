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
    float a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0) {
            printf("0.000\n");
            continue;
        }
        if (b == a) {
            printf("%.3f\n", 2 * a);
            continue;
        }
        if (c > 1) {
            // regular case
            float bouncinessIndex = b / a;
            float sum = 0;
            for (int i = 0; i < c; i++) {
                sum += a;
                a *= bouncinessIndex;
            }
            printf("%.3f\n", sum);
        } else {
            // 1 bounce case
            float bouncinessIndex = b / a;
            if (bouncinessIndex == 0) {
                // ball won't bounce
                printf("%.3f\n", a);
            } else {
                // ball will bounce
                float sum = 2 * a;
                a *= bouncinessIndex;
                // bouncinessIndex == 0 => ball(a) won't bounce
                if (a >= sum) {
                    printf("%.3f\n", sum);
                } else {
                    // ball(a) bounces forever, always bounce to a value less than "a" and infinite bounce (unbounceable)
                    printf("%.3f\n", sum + 2 * a * (sum - a) / (a * a));
                }
            }
        }
    }
    return 0;
}
