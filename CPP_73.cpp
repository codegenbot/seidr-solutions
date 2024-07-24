int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int start = 0; start < n - length + 1; start++) {
            int end = start + length - 1;
            if (arr[start] == arr[end]) {
                dp[start][end] = true;
            } else {
                dp[start][end] = false;
                for (int i = start; i <= end; i++) {
                    if (!dp[start][i-1] || !dp[i+1][end]) {
                        dp[start][end] = true;
                        break;
                    }
                }
            }
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        if (!dp[i][i+1]) {
            changes++;
        }
    }
    
    return changes;
}