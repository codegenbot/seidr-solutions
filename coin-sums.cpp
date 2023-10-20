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
5
output:
0
0
1
0
0
*/
int main() {
    int cents;
    cin >> cents;
    cout << cents << endl;
    int quarter = cents / 25;
    cents = cents % 25;
    cout << quarter << endl;
    int dime = cents / 10;
    cents = cents % 10;
    cout << dime << endl;
    int nickle = cents / 5;
    cents = cents % 5;
    cout << nickle << endl;
    int penny = cents;
    cout << penny << endl;
    return 0;
}
