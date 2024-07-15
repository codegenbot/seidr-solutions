int n = grid.size();
    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {-1, 1, 0, 0};
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<int> path(k, 0);

    auto comparePaths = [&](const vector<int>& pathA, const vector<int>& pathB) {
        for (int i = 0; i < k; ++i) {
            if (pathA[i] < pathB[i]) return true;
            if (pathA[i] > pathB[i]) return false;
        }
        return false;
    };

    function<void(int, int, int)> dfs = [&](int x, int y, int step) {
        visited[x][y] = 1;
        path[step] = grid[x][y];

        if (step == k - 1) return;

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                dfs(nx, ny, step + 1);
            }
        }

        visited[x][y] = 0;
    };

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dfs(i, j, 0);
        }
    }

    vector<int> result = path;
    return result;
}