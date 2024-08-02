int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = 1;
            else
                dp[i][j] = arr[j] == arr[i] ? dp[i-1][j-1] : dp[i-1][j-1] + 1;
        }
    }
    
    int ans = n - 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[n-i-1])
            ans = min(ans, i);
    }
    
    return ans;
}