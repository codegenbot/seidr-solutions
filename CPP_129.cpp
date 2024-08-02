Here is the solution:

```cpp
vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k + 1)));
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (i == 0 && j == 0) {
                dp[i][j][0] = grid[i][j];
            } else if (i == 0) {
                dp[i][j][0] = grid[i][j] + dp[i][j - 1][0];
            } else if (j == 0) {
                dp[i][j][0] = grid[i][j] + dp[i - 1][j][0];
            } else {
                dp[i][j][0] = grid[i][j] + min({dp[i - 1][j][0], dp[i][j - 1][0]});
            }
        }
    }
    
    vector<int> res;
    int val = dp[grid.size() - 1][grid[0].size() - 1][k];
    for (int i = k; i >= 0; i--) {
        if (val == dp[(grid.size() - 1) % grid.size()][(grid[0].size() - 1) % grid[0].size()][i]) {
            res.push_back(grid[(grid.size() - 1) % grid.size()][(grid[0].size() - 1) % grid[0].size()]);
            val -= grid[(grid.size() - 1) % grid.size()][(grid[0].size() - 1) % grid[0].size()];
        }
    }
    
    return res;
}