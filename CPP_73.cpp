int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = 0;
            else
                dp[i][j] = arr[j];
        }
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0, j = len - 1; i < n && j >= 0; i++, j--) {
            if (arr[i] == arr[j])
                dp[i][j] = dp[i + 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i + 1][j], dp[i][j - 1], dp[i + 1][j - 1]});
        }
    }
    
    return dp[0][n - 1];
}