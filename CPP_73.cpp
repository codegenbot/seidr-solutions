Here is the solution:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j].push_back(0);
            } else {
                int minChange = INT_MAX;
                
                for (int k = i; k <= j; k++) {
                    int change = dp[i][k-1].size() + dp[k+1][j].size() + 1;
                    if (change < minChange) {
                        minChange = change;
                    }
                }
                
                dp[i][j] = minChange;
            }
        }
    }
    
    return dp[0][n-1].size();
}