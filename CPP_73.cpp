int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            for(int k = i; k <= j; k++) {
                if (arr[i] == arr[k]) {
                    dp[i][j][0] = 0;
                    break;
                } else {
                    dp[i][j][0] = 1 + min(dp[i][k-1][0], dp[k+1][j][0]);
                }
            }
        }
    }
    
    return dp[0][n-1][0];
}