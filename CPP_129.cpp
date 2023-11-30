vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = INT_MAX;
    int minRow = -1, minCol = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] < minVal) {
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // Add the minimum value to the path
    path.push_back(minVal);
    
    // Keep track of visited cells
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[minRow][minCol] = true;
    
    // Perform k-1 steps
    for (int step = 1; step < k; step++) {
        // Find the neighbors of the current cell
        int currRow = minRow;
        int currCol = minCol;
        int nextRow = -1, nextCol = -1;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0) continue;
                int newRow = currRow + i;
                int newCol = currCol + j;
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && !visited[newRow][newCol]) {
                    if (nextRow == -1 || grid[newRow][newCol] < grid[nextRow][nextCol]) {
                        nextRow = newRow;
                        nextCol = newCol;
                    }
                }
            }
        }
        
        // Add the value of the next cell to the path
        path.push_back(grid[nextRow][nextCol]);
        
        // Mark the next cell as visited
        visited[nextRow][nextCol] = true;
        
        // Update the current cell
        minRow = nextRow;
        minCol = nextCol;
    }
    
    return path;
}