vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                return path;
            }
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& path) {
    if (k == 0)
        return;
    visited[x][y] = true;
    path.push_back(grid[x][y]);
    for (int i = -1; i <= 1; ++i)
        for (int j = -1; j <= 1; ++j)
            if (i != 0 || j != 0) {
                int nx = x + i;
                int ny = y + j;
                if (nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size()
                    && !visited[nx][ny]) {
                    dfs(grid, visited, nx, ny, k - 1, path);
                    return;
                }
            }
    visited[x][y] = false;
}