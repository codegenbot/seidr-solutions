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
    
    int ans = n;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (dp[i][j]) {
                ans = min(ans, j - i + 1);
            } else
                break;
        }
    }
    
    return n - ans;
}