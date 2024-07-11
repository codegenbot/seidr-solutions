int N = grid.size();
    vector<int> dx = {0, 0, 1, -1};
    vector<int> dy = {1, -1, 0, 0};
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    vector<int> path;
    
    function<void(int, int, int)> dfs = [&](int x, int y, int steps) {
        if (steps == k) {
            path.push_back(grid[x][y]);
            return;
        }
        
        visited[x][y] = true;
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                dfs(nx, ny, steps + 1);
            }
        }
        visited[x][y] = false;
    };
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dfs(i, j, 1);
        }
    }
    
    return path;
}