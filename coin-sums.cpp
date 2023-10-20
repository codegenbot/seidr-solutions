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
    int penny = 1;
    int nickle = 5;
    int dime = 10;
    int quarter = 25;
    int cents;
    while (cin >> cents) {
        int num_quarter = 0;
        int num_dime = 0;
        int num_nickle = 0;
        int num_penny = 0;
        while (cents >= quarter) {
            cents -= quarter;
            num_quarter++;
        }
        while (cents >= dime) {
            cents -= dime;
            num_dime++;
        }
        while (cents >= nickle) {
            cents -= nickle;
            num_nickle++;
        }
        while (cents >= penny) {
            cents -= penny;
            num_penny++;
        }
        cout << num_penny << endl;
        cout << num_nickle << endl;
        cout << num_dime << endl;
        cout << num_quarter << endl;
    }
    return 0;
}
