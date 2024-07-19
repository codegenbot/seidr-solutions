int smallest_change(std::vector<int> myArr) {
    int n = myArr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (myArr[i] == myArr[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[0][n - 1];