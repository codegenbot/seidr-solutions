vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<pair<int, int>> moves = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n;
    };
    
    auto dfs = [&](int r, int c, int cnt) {
        path.push_back(grid[r][c]);
        if (cnt == k) {
            return;
        }
        grid[r][c] = -1;
        for (auto move : moves) {
            int x = r + move.first;
            int y = c + move.second;
            if (isValid(x, y) && grid[x][y] != -1) {
                dfs(x, y, cnt+1);
                break;
            }
        }
    };
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                dfs(i, j, 1);
                break;
            }
        }
    }
    
    return path;
}