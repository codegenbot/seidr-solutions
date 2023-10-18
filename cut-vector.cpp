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
#include <algorithm>
using namespace std;
/*
Given a non-negative integer N, find the largest number that is less than or equal to N with monotone increasing digits.

(Recall that an integer has monotone increasing digits if and only if each pair of adjacent digits x and y satisfy x <= y.)

Example 1:
Input: N = 10
Output: 9
Example 2:
Input: N = 1234
Output: 1234
Example 3:
Input: N = 332
Output: 299
Note: N is an integer in the range [0, 10^9].
*/

int find(int num) {
    int res = 0;
    int n = num;
    while(n > 0) {
        if(n % 10 == 9) {
            res = res * 10 + 9;
        } else {
            res = res * 10 + 8;
        }
        n /= 10;
    }
    return res;
}
int main() {
    int n = 0;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i++) {
        int tmp = find(i);
        if(tmp > res) {
            res = tmp;
        }
    }
    cout << res << endl;
    return 0;
}
