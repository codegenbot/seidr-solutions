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
11
output:
1
0
0
0
input:
12
output:
2
0
0
0
input:
13
output:
3
0
0
0
input:
14
output:
4
0
0
0
input:
15
output:
0
1
0
0
*/
int main() {
    int n;
    cin >> n;
    cout << n << endl;
    cout << n / 10 << endl;
    n %= 10;
    cout << n / 2 << endl;
    n %= 2;
    cout << n << endl;
    return 0;
}
