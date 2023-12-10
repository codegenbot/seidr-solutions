```
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
int main()
{
    int cents;
    cin >> cents;
    int pennies = 0, nickles = 0, dimes = 0, quarters = 0;

    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10 && cents < 25) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5 && cents < 10) {
            nickles++;
            cents -= 5;
        } else {
            pennies++;
            cents--;
        }
    }

    cout << quarters << " " << dimes << " " << nickles << " " << pennies << endl;
}
```