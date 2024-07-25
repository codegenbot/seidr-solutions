int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = arr[i];
    }
    
    for (int length = 2; length <= n; length++) {
        for (int start = 0; start < n - length + 1; start++) {
            int end = start + length - 1;
            
            if (arr[start] == arr[end]) {
                dp[start][end] = dp[start + 1][end - 1];
            } else {
                dp[start][end] = 1 + min(dp[start + 1][end], dp[start][end - 1]);
            }
        }
    }
    
    return dp[0][n - 1];
}