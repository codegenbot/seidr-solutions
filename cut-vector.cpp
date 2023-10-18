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
Given an array of integers, find the length of longest subsequence which is first increasing then decreasing.

**Example: **

For the given array [1 11 2 10 4 5 2 1]

Longest subsequence is [1 2 10 4 2 1]

Return value 6
*/
int main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> dp1(n, 1);
    vector<int> dp2(n, 1);
    for(int i = n - 2; i >= 0; i--) {
        for(int j = n - 1; j > i; j--) {
            if(a[i] < a[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
        }
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = n - 1; j > i; j--) {
            if(a[i] > a[j]) dp2[i] = max(dp2[i], dp2[j] + 1);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) ans = max(ans, dp1[i] + dp2[i] - 1);
    cout << ans << endl;
    cout << endl;
    return 0;
}
