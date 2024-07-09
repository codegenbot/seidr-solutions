Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = arr[i] == arr[n - 1 - j];
        }
    }
    
    int ans = n, count = 0;
    for (int i = 0; i < n; i++) {
        bool f = false;
        for (int j = i; j < n; j++) {
            if (!dp[i][j]) {
                count++;
                f = true;
            }
        }
        ans = min(ans, count);
    }
    
    return ans;
}