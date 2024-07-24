vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> result;
    function<void(int, int)> dfs = [&](int x, int y) {
        if (result.size() == k) return;
        visited[x][y] = true;
        result.push_back(grid[x][y]);
        for (int dx : {-1, 0, 1}) {
            for (int dy : {-1, 0, 1}) {
                int nx = x + dx;
                int ny = y + dy;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                    !visited[nx][ny] && result.size() + 1 <= k) {
                    dfs(nx, ny);
                    return;
                }
            }
        }
        visited[x][y] = false;
    };
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) dfs(i, j);
        }
    }
    return result;
}