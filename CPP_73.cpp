```cpp
int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 0;
    bool dp[n][n];
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (!dp[i][j]) {
                changes++;
                dp[i][j] = true;
            }
            for (int k = i; k < j; k++) {
                if ((arr[k] > arr[k + 1] && !dp[i][k] && !dp[k + 1][j]) || (arr[k] < arr[k + 1] && dp[i][k] && dp[k + 1][j])) {
                    dp[i][j] = true;
                    break;
                }
            }
        }
    }
    return changes;
}