int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = (arr[i] == arr[j]) && dp[i - 1][j + 1];
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n; i++) {
        if (!dp[0][i])
            changes++;
    }
    return changes;
}