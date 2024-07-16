int N = grid.size();
    vector<int> result;

    vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < N && y >= 0 && y < N;
    };

    auto dfs = [&](int x, int y, int steps, vector<int>& path) {
        if (steps == k) {
            if (result.empty() || path < result) {
                result = path;
            }
            return;
        }

        for (auto& dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            if (isValid(nx, ny)) {
                path.push_back(grid[nx][ny]);
                dfs(nx, ny, steps + 1, path);
                path.pop_back();
            }
        }
    };

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            vector<int> path = {grid[i][j]};
            dfs(i, j, 1, path);
        }
    }

    return result;
}