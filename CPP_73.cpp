```cpp
#include <vector>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(1));
    for (int i = 0; i < n; i++) {
        dp[i][0] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (arr[i] == arr[j]) {
                dp[i][0] = dp[i + 1][0];
            } else {
                dp[i][0] = 1 + min(dp[i + 1][0], dp[i][0]);
            }
        }
    }
    return dp[0][0];
}