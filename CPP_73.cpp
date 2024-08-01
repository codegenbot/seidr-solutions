int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = arr[i] == arr[n - 1 - i];
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n; i++) {
        if (!dp[i][n - 1 - i])
            changes++;
    }
    
    return changes;
}