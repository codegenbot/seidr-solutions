vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<int> result;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    
    function<void(int, int, int, vector<int>)> dfs = [&](int x, int y, int steps, vector<int> path) {
        if (steps == k) {
            if (result.empty() || path < result) {
                result = path;
            }
            return;
        }
        
        visited[x][y] = true;
        path.push_back(grid[x][y]);
        
        for (const auto& dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                dfs(nx, ny, steps + 1, path);
            }
        }
        
        visited[x][y] = false;
    };
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dfs(i, j, 1, {});
        }
    }
    
    return result;
}