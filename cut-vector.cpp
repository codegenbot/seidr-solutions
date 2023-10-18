#include <algorithm>
#include <cstring>
#include <climits>
#include <deque>
#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
You are given an array of integers. Find the length of the longest increasing subsequence (not necessarily contiguous) in the array.
Example:
[0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]
The following input should return 6 since the longest increasing subsequence is 0, 2, 6, 9 , 11, 15.
*/
int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp(n, 1);
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, dp[i]);
    cout << ans << endl;
    return 0;
}
