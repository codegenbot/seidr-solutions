vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 1) {
                dfs(grid, visited, i, j, k, res);
                return res;
            }
    return {};
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>& res) {
    if (k == 0)
        return;
    int n = grid.size();
    for (int dx : {-1, 0, 1}) {
        int nx = x + dx;
        if (nx < 0 || nx >= n)
            continue;
        for (int dy : {-1, 0, 1}) {
            int ny = y + dy;
            if (ny < 0 || ny >= n || visited[nx][ny])
                continue;
            visited[nx][ny] = true;
            res.push_back(grid[nx][ny]);
            dfs(grid, visited, nx, ny, k - 1, res);
            visited[nx][ny] = false;
        }
    }
}