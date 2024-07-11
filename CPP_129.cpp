vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0 && j > 0) {
                dp[i][j] = min({grid[i-1][j], grid[i][j-1], grid[i-1][j-1]});
            } else if (i > 0) {
                dp[i][j] = grid[i-1][j];
            } else {
                dp[i][j] = grid[i][j-1];
            }
        }
    }
    
    vector<int> path;
    int i = n - 1, j = n - 1;
    while (k > 0) {
        path.push_back(grid[i][j]);
        if (i > 0 && j > 0) {
            if (grid[i-1][j] < grid[i][j-1] && grid[i-1][j] < grid[i-1][j-1]) {
                i--;
            } else if (grid[i][j-1] < grid[i-1][j] && grid[i][j-1] < grid[i-1][j-1]) {
                j--;
            } else {
                i--; j--;
            }
        } else if (i > 0) {
            i--;
        } else {
            j--;
        }
        k--;
    }
    
    reverse(path.begin(), path.end());
    return path;
}