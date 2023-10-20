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
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/
int main() {
    int cents;
    cin >> cents;
    int count[4] = {0};
    count[0] = cents;
    int c = 0;
    while (c < 4) {
        if (count[c] >= 25) {
            count[3] += count[c] / 25;
            count[c] = count[c] % 25;
        }
        c++;
    }
    c = 0;
    while (c < 3) {
        if (count[c] >= 10) {
            count[2] += count[c] / 10;
            count[c] = count[c] % 10;
        }
        c++;
    }
    c = 0;
    while (c < 2) {
        if (count[c] >= 5) {
            count[1] += count[c] / 5;
            count[c] = count[c] % 5;
        }
        c++;
    }
    c = 0;
    while (c < 1) {
        if (count[c] >= 1) {
            count[0] += count[c] / 1;
            count[c] = count[c] % 1;
        }
        c++;
    }
    for (int i = 0; i < 4; i++) {
        cout << count[i];
        if (i != 3) {
            cout << " ";
        }
    }
    return 0;
}
