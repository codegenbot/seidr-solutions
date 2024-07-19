vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, int>>> dir(4);
    for (int i = 0; i < 4; i++) {
        if (i == 0) dir[i] = {{-1, 0}, {1, 0}};
        else if (i == 1) dir[i] = {{0, -1}, {0, 1}};
        else if (i == 2) dir[i] = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
        else dir[i] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    }
    vector<bool> visited(n * n);
    vector<int> res;
    function<void(int, int, int)> dfs = [&](int x, int y, int len) {
        if (len == k) {
            res = grid[x][y];
            return;
        }
        for (auto &d : dir[0]) {
            int nx = x + d.first, ny = y + d.second;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n &&
                !visited[nx * n + ny] && grid[x][y] < grid[nx][ny]) {
                visited[nx * n + ny] = true;
                dfs(nx, ny, len + 1);
                if (res.empty()) res = {grid[x][y], grid[nx][ny]};
                else if (grid[nx][ny] < res[0]) res = {grid[nx][ny]};
                visited[nx * n + ny] = false;
            }
        }
    };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i * n + j] = true;
            dfs(i, j, 1);
            if (!res.empty()) break;
            visited[i * n + j] = false;
        }
        if (!res.empty()) break;
    }
    return res;
}