int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == j) {
                dp[i][j] = 0;
            } else if (i < j) {
                int same_count = 0, diff_count = 0;
                for (int k = i; k <= j; k++) {
                    if (arr[k] == arr[j - k + i]) {
                        same_count++;
                    } else {
                        diff_count++;
                    }
                }
                dp[i][j] = min(same_count + (diff_count * 2), (n - i) * 2);
            }
        }
    }
    
    return dp[0][n - 1];
}