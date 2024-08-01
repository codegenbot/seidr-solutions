vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, dp, visited, i, j, k);
            }
        }
    }

    vector<int> res;
    int maxVal = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == k) {
                if (grid[i][j] > maxVal) {
                    res.clear();
                    for (int x = 0; x <= k; x++) {
                        res.push_back(grid[i][j]);
                    }
                    maxVal = grid[i][j];
                }
            }
        }
    }

    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<int>>& dp, vector<vector<bool>>& visited, int i, int j, int k) {
    int n = grid.size();
    if (k == 0) {
        return;
    }

    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            if (x == 0 && y == 0) continue;

            int ni = i + x;
            int nj = j + y;

            if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                visited[ni][nj] = true;
                dp[ni][nj] = k - 1;
                dfs(grid, dp, visited, ni, nj, k - 1);
                visited[ni][nj] = false;
            }
        }
    }
}