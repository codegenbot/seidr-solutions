bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for(int i = 1; i < n; ++i){
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }
    
    for(int j = 1; j < m; ++j){
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }
    
    for(int i = 1; i < n; ++i){
        for(int j = 1; j < m; ++j){
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(dp[i][j] > k){
                dp[i][j] = -1;
            }
        }
    }
    
    return dp[n-1][m-1];
}