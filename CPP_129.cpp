void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, vector<int>& res) {
    int n = grid.size();
    
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if(dx == 0 && dy == 0)
                continue;
            
            int nx = x + dx, ny = y + dy;
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                visited[x][y] = true;
                res.push_back(grid[nx][ny]);
                
                dfs(grid, visited, nx, ny, res);
            }
        }
    }
    
    visited[x][y] = false;
}

vector<int> minPath(vector<vector<int>> grid) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, res);
            }
        }
    }
    return res;
}