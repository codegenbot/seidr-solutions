vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                dp[i][j] = 0;
                visited[i][j] = true;
            }
        }
    }

    vector<int> res;
    pair<int, int> pos = {{-1, -1}};
    for (int i = 0; i < k; ++i) {
        int min_val = 1e9;
        pos = {-1, -1};
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (!visited[j][k] && dp[j][k] + 1 < min_val) {
                    min_val = dp[j][k] + 1;
                    pos = {j, k};
                }
            }
        }
        res.push_back(grid[pos.first][pos.second]);
        visited[pos.first][pos.second] = true;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (!visited[j][k]) {
                    dp[j][k] += min_val;
                }
            }
        }
    }

    return res;
}