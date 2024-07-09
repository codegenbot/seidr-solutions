int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            if (arr[i] == arr[j]) {
                dp[i][j].push_back(dp[i+1][j-1][0]);
            } else {
                dp[i][j] = vector<int>(2);
                for (int k = 0; k < 2; k++) {
                    int changes = dp[i+1][j-1][k];
                    if (k == 0) {
                        changes++;
                    }
                    dp[i][j].push_back(changes);
                }
            }
        }
    }
    
    return *min_element(dp[0][n-1].begin(), dp[0][n-1].end());
}