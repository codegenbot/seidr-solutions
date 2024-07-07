vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, &res);
            }
        }
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* res) {
    (*res).push_back(grid[x][y]);
    visited[x][y] = true;
    if (k == 0) {
        return;
    }
    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size() && !visited[nx][ny]) {
                dfs(grid, visited, nx, ny, k - 1, res);
                return;
            }
        }
    }
}