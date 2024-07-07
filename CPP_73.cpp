int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (arr[i] == arr[j]) {
                dp[i][j] = true;
            } else {
                dp[i][j] = false;
            }
            
            for (int k = i + 1; k < j; k++) {
                dp[i][j] = dp[i][k] && dp[k][j];
            }
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        if (!dp[i][n - 1]) {
            changes++;
        }
    }
    
    return changes;
}