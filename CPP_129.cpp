vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                dp[i][j] = grid[i][j];
            } else {
                int min_val = INT_MAX;
                if (i > 0) min_val = min(min_val, dp[i-1][j]);
                if (j > 0) min_val = min(min_val, dp[i][j-1]);
                if (i < n - 1) min_val = min(min_val, dp[i+1][j]);
                if (j < n - 1) min_val = min(min_val, dp[i][j+1]);
                dp[i][j] = grid[i][j] + min_val;
            }
        }
    }
    
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == dp[0][0]) break;
            min_val = min(min_val, dp[i][j]);
        }
    }
    
    int x = 0, y = 0;
    for (int i = k - 1; i >= 0; i--) {
        if (x > 0 && y > 0) {
            if (dp[x-1][y] == min_val) { x--; } 
            else if (dp[x][y-1] == min_val) { y--; }
            else { min_val -= grid[x][y]; }
        } else if (x > 0) {
            if (dp[x-1][y] == min_val) { x--; } 
            else { min_val -= grid[x][y]; }
        } else if (y > 0) {
            if (dp[x][y-1] == min_val) { y--; } 
            else { min_val -= grid[x][y]; }
        } else {
            while (i > 0 && x < n - 1 && dp[x+1][y] <= dp[x][y]) x++;
            while (i > 0 && y < n - 1 && dp[x][y+1] <= dp[x][y]) y++;
            min_val -= grid[x][y];
        }
    }
    
    while (k--) {
        res.push_back(grid[x][y]);
        if (x > 0) x--;
        else if (y > 0) y--;
        else break;
    }
    
    return res;
}