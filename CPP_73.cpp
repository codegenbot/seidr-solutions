int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = arr[i];
            else
                dp[i][j] = arr[i] + dp[i - 1][j + 1];
        }
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = i; j >= 0; j--) {
            if (dp[i][j] != arr[j])
                cnt++;
        }
        ans = min(ans, cnt);
    }
    
    return ans;
}