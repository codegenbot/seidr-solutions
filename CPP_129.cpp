vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (dp[i][j] < min_val) {
                min_val = dp[i][j];
                vector<int> path;
                int curr_i = i, curr_j = j;
                for (int l = 0; l <= k; ++l) {
                    path.push_back(grid[curr_i][curr_j]);
                    if (k > 1 && l < k) {
                        if (i > 0 && dp[i-1][j] == min_val - grid[curr_i][curr_j]) curr_i--;
                        else if (j > 0 && dp[i][j-1] == min_val - grid[curr_i][curr_j]) curr_j--;
                        else if (i < n - 1 && dp[i+1][j] == min_val - grid[curr_i][curr_j]) curr_i++;
                        else if (j < n - 1 && dp[i][j+1] == min_val - grid[curr_i][curr_j]) curr_j++;
                    }
                }
                return path;
            }
        }
    }
    
    return {};
}