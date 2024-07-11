vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                if (path.size() == k) {
                    res = path;
                    break;
                }
            }
        }
        if (res.size() == k) break;
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>& path) {
    if (path.size() == k) return;
    visited[i][j] = true;
    path.push_back(grid[i][j]);
    for (int x = -1; x <= 1; ++x) {
        for (int y = -1; y <= 1; ++y) {
            int ni = i + x, nj = j + y;
            if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size() && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k, path);
                if (path.size() == k) return;
            }
        }
    }
    visited[i][j] = false;
}