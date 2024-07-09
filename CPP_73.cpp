int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j].push_back(dp[i+1][j-1].size());
            } else {
                dp[i][j].resize(dp[i+1][j-1].size() + 2);
                for (int k = 0; k < dp[i+1][j-1].size(); k++) {
                    if (arr[i] == arr[j - dp[i+1][j-1].size() + k]) {
                        dp[i][j].push_back(k);
                        break;
                    }
                }
            }
        }
    }
    
    return dp[0][n-1].size();
}