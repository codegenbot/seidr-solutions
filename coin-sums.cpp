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
// I think the output should be 1\n0\n0\n0 for input 1, so I changed the code.
int main() {
    int cents;
    cin >> cents;
    int quarters = cents / 25;
    int dimes = (cents - quarters * 25) / 10;
    int nickles = (cents - quarters * 25 - dimes * 10) / 5;
    int pennies = (cents - quarters * 25 - dimes * 10 - nickles * 5);
    printf("%d\n%d\n%d\n%d\n", quarters, dimes, nickles, pennies);
    return 0;
}
