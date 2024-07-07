int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = 0;
            else if (arr[j] == arr[i])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i-1][j-1] + 2, dp[i-1][j] + 1);
        }
    }
    
    return dp[n-1][0];
}