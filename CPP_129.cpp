vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    // Helper function to check if a cell is valid
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y];
    };
    
    // Helper function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y) {
        vector<pair<int, int>> neighbors;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for (auto dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            
            if (isValid(nx, ny)) {
                neighbors.push_back({nx, ny});
            }
        }
        
        return neighbors;
    };
    
    // Helper function to perform depth-first search
    function<bool(int, int, int)> dfs = [&](int x, int y, int steps) {
        path.push_back(grid[x][y]);
        visited[x][y] = true;
        
        if (steps == k) {
            return true;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](const pair<int, int>& a, const pair<int, int>& b) {
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        for (auto neighbor : neighbors) {
            int nx = neighbor.first;
            int ny = neighbor.second;
            
            if (dfs(nx, ny, steps + 1)) {
                return true;
            }
        }
        
        path.pop_back();
        visited[x][y] = false;
        return false;
    };
    
    // Find the minimum path starting from each cell in the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dfs(i, j, 1);
        }
    }
    
    return path;
}