vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, dp, visited, i, j);
            }
        }
    }

    vector<int> res;
    int val = -1;
    for (int i = 0; i < k; i++) {
        res.push_back(val);
    }

    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<int>>& dp, vector<vector<bool>>& visited, int x, int y) {
    int n = grid.size();
    if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y]) {
        return;
    }

    visited[x][y] = true;

    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue;
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                dp[x][y] = min(dp[x][y], grid[nx][ny]);
            }
        }
    }

    visited[x][y] = false;
}