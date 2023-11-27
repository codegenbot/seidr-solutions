vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            minVal = min(minVal, grid[i][j]);
        }
    }
    
    // Find the starting cell with the minimum value
    pair<int, int> startCell;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == minVal) {
                startCell = make_pair(i, j);
                break;
            }
        }
    }
    
    // Perform a depth-first search to find the minimum path
    dfs(grid, startCell.first, startCell.second, k, path);
    
    return path;
}

void dfs(vector<vector<int>>& grid, int row, int col, int k, vector<int>& path) {
    int n = grid.size();
    
    // Base case: if k is 0, we have found the minimum path
    if (k == 0) {
        return;
    }
    
    // Add the value of the current cell to the path
    path.push_back(grid[row][col]);
    
    // Mark the current cell as visited
    grid[row][col] = -1;
    
    // Check the neighboring cells
    vector<pair<int, int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (auto neighbor : neighbors) {
        int newRow = row + neighbor.first;
        int newCol = col + neighbor.second;
        
        // Check if the neighboring cell is within the grid boundaries and not visited
        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && grid[newRow][newCol] != -1) {
            dfs(grid, newRow, newCol, k - 1, path);
        }
    }
}