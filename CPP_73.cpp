int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;
        
    for (int len = 2; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1;
            dp[i][j] = arr[i] == arr[j];
            
            if (dp[i][j] && len == 2)
                continue;
                
            for (int k = i; k < j; ++k)
                dp[i][j] = dp[i][j] || (arr[i] == arr[k + 1]);
        }
    }
    
    int ans = n, cnt = 0;
    
    for (int i = 0; i < n; ++i) {
        if (!dp[0][n - 1])
            break;
            
        for (int j = 1; j < n - 1; ++j)
            dp[i][n - 1] &= dp[i][j];
            
        if (!dp[i][n - 1]) {
            ans = i;
            cnt = n - 1 - i;
            break;
        }
    }
    
    return cnt;
}