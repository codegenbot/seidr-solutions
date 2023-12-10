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
    vector<int> coins(4);
    for (int i = 0; i < 4; i++) {
        if (cents >= 25) {
            coins[i]++;
            cents -= 25;
        } else if (cents >= 10) {
            coins[i]++;
            cents -= 10;
        } else if (cents >= 5) {
            coins[i]++;
            cents -= 5;
        } else if (cents > 0) {
            coins[i]++;
            cents = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << coins[i] << " ";
    }
    return 0;
}