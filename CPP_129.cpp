vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                vector<vector<bool>> visited(n, vector<bool>(n));
                function<void(int, int, int)> dfs = [&](int x, int y, int len) {
                    res.push_back(grid[x][y]);
                    if (len > k) return;
                    for (int dx : {-1, 0, 1}) {
                        for (int dy : {-1, 0, 1}) {
                            if (dx == 0 && dy == 0) continue;
                            int nx = x + dx, ny = y + dy;
                            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                                visited[nx][ny] = true;
                                dfs(nx, ny, len + 1);
                                visited[nx][ny] = false;
                            }
                        }
                    }
                };
                dfs(i, j, 0);
            }
        }
    }
    return res;
}