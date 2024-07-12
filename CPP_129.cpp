int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
            }
        }
    }

    return dp[n-1][n-1] <= k ? vector<int>({dp[n-1][n-1]}) : vector<int>();