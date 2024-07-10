#include <stdio.h>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;
    
    for (int len = 1; len < n; ++len) {
        for (int i = 0; i < n - len; ++i) {
            int j = i + len;
            if (arr[i] == arr[j])
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = false;
        }
    }
    
    int res = n;
    for (int i = 0; i < n; ++i)
        if (!dp[0][i]) {
            int left, right;
            for (left = 0; !dp[left][i]; ++left);
            for (right = i; !dp[i][right]; ++right);
            res = min(res, (right - left + 1));
        }
    
    return n - res;
}