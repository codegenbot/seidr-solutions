int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j)
                dp[i][j] = 0;
            else if (arr[i] == arr[j])
                dp[i][j] = dp[i][j - 1];
            else
                dp[i][j] = min(1 + dp[i + 1][j - 1], dp[i][j - 1]) + 1;
        }
    }
    
    return dp[0][n - 1];
}