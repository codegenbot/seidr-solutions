vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path = dfs(grid, visited, i, j, k);
                if (!res.empty() && path.size() > res.size()) continue;
                res = path;
            }
        }
    }
    
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k) {
    int n = grid.size();
    vector<int> path;
    if (k == 0) {
        return path;
    }
    
    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                visited[nx][ny] = true;
                path.push_back(grid[nx][ny]);
                vector<int> res = dfs(grid, visited, nx, ny, k - 1);
                if (!res.empty()) {
                    path.insert(path.end(), res.begin(), res.end());
                }
                visited[nx][ny] = false;
                return path;
            }
        }
    }
    
    return {};
}