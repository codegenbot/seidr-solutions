vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = grid[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            minVal = min(minVal, grid[i][j]);
        }
    }
    
    // Find the starting cell with the minimum value
    int startRow, startCol;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == minVal) {
                startRow = i;
                startCol = j;
                break;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(grid[startRow][startCol]);
    
    // Move to the neighbor cells until the path length is k
    while (path.size() < k) {
        int currRow = startRow;
        int currCol = startCol;
        
        // Find the neighbor cell with the minimum value
        int minVal = INT_MAX;
        int nextRow, nextCol;
        if (currRow > 0 && grid[currRow - 1][currCol] < minVal) {
            minVal = grid[currRow - 1][currCol];
            nextRow = currRow - 1;
            nextCol = currCol;
        }
        if (currRow < n - 1 && grid[currRow + 1][currCol] < minVal) {
            minVal = grid[currRow + 1][currCol];
            nextRow = currRow + 1;
            nextCol = currCol;
        }
        if (currCol > 0 && grid[currRow][currCol - 1] < minVal) {
            minVal = grid[currRow][currCol - 1];
            nextRow = currRow;
            nextCol = currCol - 1;
        }
        if (currCol < n - 1 && grid[currRow][currCol + 1] < minVal) {
            minVal = grid[currRow][currCol + 1];
            nextRow = currRow;
            nextCol = currCol + 1;
        }
        
        // Move to the neighbor cell and add its value to the path
        startRow = nextRow;
        startCol = nextCol;
        path.push_back(grid[startRow][startCol]);
    }
    
    return path;
}