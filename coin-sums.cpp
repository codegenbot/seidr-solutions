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
    while (cin >> n) {
        int res = 0;
        int num = 0;
        int cent = n;
        int q = cent / 25;
        cent %= 25;
        int d = cent / 10;
        cent %= 10;
        int n = cent / 5;
        cent %= 5;
        int p = cent;
        cout << p << endl;
        cout << n << endl;
        cout << d << endl;
        cout << q << endl;
    }
    
    return 0;
}
