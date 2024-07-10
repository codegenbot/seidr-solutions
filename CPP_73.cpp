int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = 0;
            else
                dp[i][j] = arr[i] != arr[n - 1 - i] ? 1 + min(dp[i-1][j-1], dp[i-1][j]) : dp[i-1][j];
        }
    }
    
    return dp.back().back();
}