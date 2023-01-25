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
1000
input:
2
output:
2000
input:
3
output:
3000
input:
4
output:
4000
input:
5
output:
0100
*/
int main() {
    int n;
    cin >> n;
    int num = n * 100;
    int res = 0;
    int n1, n2, n3, n4;
    n1 = num / 25;
    num = num % 25;
    n2 = num / 10;
    num = num % 10;
    n3 = num / 5;
    num = num % 5;
    n4 = num;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    return 0;
}
