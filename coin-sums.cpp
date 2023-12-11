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
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    map<int, int> count;
    for (int i = 0; i < n; i++) {
        if (coins[i] % 25 == 0) {
            count[25]++;
            coins[i] -= 25;
        } else if (coins[i] % 10 == 0) {
            count[10]++;
            coins[i] -= 10;
        } else if (coins[i] % 5 == 0) {
            count[5]++;
            coins[i] -= 5;
        } else {
            count[1]++;
        }
    }
    cout << "Number of quarters: " << count[25] << endl;
    cout << "Number of dimes: " << count[10] << endl;
    cout << "Number of nickles: " << count[5] << endl;
    cout << "Number of pennies: " << count[1] << endl;
    return 0;
}