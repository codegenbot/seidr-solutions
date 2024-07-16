int n = grid.size();
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    pair<int, int> start;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                start = {i, j};
                break;
            }
        }
    }

    path.push_back(grid[start.first][start.second]);
    visited[start.first][start.second] = true;

    while (path.size() < k) {
        int x = start.first;
        int y = start.second;
        pair<int, int> next = {x, y};

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                next = {nx, ny};
                break;
            }
        }

        start = next;
        path.push_back(grid[start.first][start.second]);
        visited[start.first][start.second] = true;
    }

    return path;
}