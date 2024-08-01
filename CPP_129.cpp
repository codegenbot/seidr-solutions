bool issame(vector<int> a, vector<int> b) {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
}

vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    const int INF = 1000000007;
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INF));
    dp[0][0] = grid[0][0];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }
    
    vector<vector<int>> path;
    path.push_back({n - 1, m - 1});
    int currentK = k;
    int i = n - 1, j = m - 1;
    
    while (i > 0 || j > 0) {
        if (i > 0 && dp[i - 1][j] + grid[i][j] <= currentK) {
            path.push_back({i - 1, j});
            i--;
            currentK -= grid[i][j];
        } 
        else {
            path.push_back({i, j - 1});
            j--;
            currentK -= grid[i][j];
        }
    }
    
    reverse(path.begin(), path.end());
    
    return path;
}