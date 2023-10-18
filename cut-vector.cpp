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
Given a number n, put all elements from 1 to n in a container in such a way that the following is always true:
if element x is in the container, then so are 2*x and 2*x+1.
Example: if n=8, one possible container would be {8, 7, 4, 5, 2, 3, 6, 1}, another would be {4, 3, 2, 1, 6, 5, 7, 8}.
Output the number of elements in the smallest possible container.
*/
int main() {
    int n;
    cin >> n;
    int res = 0;
    while(n) {
        if(n & 1) {
            res++;
        } else {
            n /= 2;
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++) res = max(res, dp[i]);
    cout << res << endl;
    return 0;
}
