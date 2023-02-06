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
    int cents;
    while(cin >> cents) {
        int num = 0;
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        for(int i = 0; i < cents; i++) {
            num++;
            if(num == 25) {
                num = 0;
                num3++;
            }
            else if(num == 10) {
                num = 0;
                num2++;
            }
            else if(num == 5) {
                num = 0;
                num1++;
            }
        }
        cout << num + num1 * 5 + num2 * 10 + num3 * 25 << endl;
    }
    return 0;
}
