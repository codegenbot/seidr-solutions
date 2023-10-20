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

int pennies, nickles, dimes, quarters;
int count(int cents) {
    int sum = 0;
    int num = 0;
    while (cents >= 25) {
        cents -= 25;
        num++;
    }
    quarters = num;
    sum += num;
    num = 0;
    while (cents >= 10) {
        cents -= 10;
        num++;
    }
    dimes = num;
    sum += num;
    num = 0;
    while (cents >= 5) {
        cents -= 5;
        num++;
    }
    nickles = num;
    sum += num;
    num = 0;
    while (cents >= 1) {
        cents -= 1;
        num++;
    }
    pennies = num;
    sum += num;
    return sum;
}

int main() {
    int cents;
    cin >> cents;
    int ans = count(cents);
    cout << ans << endl;
    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;
    return 0;
}
