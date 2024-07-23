int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                dp[i][j] = true;
            } else if (i == j) {
                dp[i][j] = true;
            } else if (arr[j - 1] != arr[i]) {
                if (j >= 1 && dp[i - 1][j - 1] && dp[j - 1][j]) {
                    dp[i][j] = true;
                } else {
                    dp[i][j] = false;
                }
            }
        }
    }
    
    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        if (!dp[i][i + 1]) {
            changes++;
        }
    }
    
    return changes;
}