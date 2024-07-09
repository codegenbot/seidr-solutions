Here is the solution:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;
    
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            if (arr[i] == arr[j])
                dp[i][j] = true;
            else
                dp[i][j] = dp[i + 1][j - 1];
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n; ++i) {
        if (!dp[0][i]) {
            changes++;
            break;
        }
    }
    
    return changes;
}