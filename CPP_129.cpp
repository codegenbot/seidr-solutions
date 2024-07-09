int minPath(vector<vector<int>>& grid, int k){
    int m = grid.size();
    if(m == 0) return -1; // grid is empty

    int n = grid[0].size();
    if(n == 0) return -1; // grid is empty

    vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }

    return dp[m - 1][n - 1] <= k ? dp[m - 1][n - 1] : -1;
}