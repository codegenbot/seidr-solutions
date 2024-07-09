Here is the solution:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int i = 0; i <= n / 2; i++) {
        if (arr[i] == arr[n - 1 - i])
            dp[i][i] = 0;
        else
            dp[i][i] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i - 1; j++) {
            if (arr[j] == arr[n - i - 1])
                dp[j + 1][n - i - 2] = dp[j][j];
            else
                dp[j + 1][n - i - 2] = min(dp[j][j] + 1, (i > 0) ? dp[i][n - i - 1] : 1);
        }
    }
    return dp[0][n - 1];
}