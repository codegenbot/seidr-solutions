vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int mn = INT_MAX;
                if (i > 0) mn = min(mn, dp[i-1][j]);
                if (j > 0) mn = min(mn, dp[i][j-1]);
                if (i < n - 1) mn = min(mn, dp[i+1][j]);
                if (j < n - 1) mn = min(mn, dp[i][j+1]);
                dp[i][j] = mn;
            }
        }
    }
    
    int i = 0, j = 0;
    while (k > 0) {
        res.push_back(grid[i][j]);
        if (i > 0 && j < n - 1) {
            if (j == 0 || grid[i-1][j] >= grid[i][j+1]) i--;
            else j++;
        } else if (i < n - 1 && j > 0) {
            if (i == n - 1 || grid[i][j-1] >= grid[i+1][j]) j--;
            else i++;
        } else if (i > 0 && j > 0) {
            if (grid[i-1][j] >= grid[i][j-1] && grid[i-1][j] >= grid[i+1][j]) i--;
            else if (grid[i][j-1] >= grid[i+1][j]) j--;
            else i++;
        } else if (i < n - 1 && j == 0) {
            if (grid[i][j] >= grid[i+1][j]) i++;
            else j++;
        } else if (i > 0 && j == n - 1) {
            if (grid[i-1][j] >= grid[i][j]) i--;
            else i++;
        }
        
        k--;
    }
    
    return res;
}