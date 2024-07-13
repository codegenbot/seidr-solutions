int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int start = 0; start < n - length + 1; start++) {
            int end = start + length - 1;
            
            if (arr[start] == arr[end]) {
                dp[start][end] = dp[start + 1][end - 1];
            } else {
                dp[start][end] = false;
            }
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n; i++) {
        if (!dp[0][i]) {
            changes++;
        }
    }
    
    return changes;
}