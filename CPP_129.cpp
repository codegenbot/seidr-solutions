vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the starting cell with the minimum value
    int minVal = grid[0][0];
    int minRow = 0;
    int minCol = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(minVal);
    
    // Perform k-1 steps to find the remaining cells in the path
    for(int step = 1; step < k; step++){
        int currRow = minRow;
        int currCol = minCol;
        int nextRow = -1;
        int nextCol = -1;
        int minDiff = INT_MAX;
        
        // Check all neighboring cells to find the next cell with the minimum difference in value
        if(currRow > 0 && abs(grid[currRow-1][currCol] - grid[currRow][currCol]) < minDiff){
            nextRow = currRow-1;
            nextCol = currCol;
            minDiff = abs(grid[currRow-1][currCol] - grid[currRow][currCol]);
        }
        if(currRow < n-1 && abs(grid[currRow+1][currCol] - grid[currRow][currCol]) < minDiff){
            nextRow = currRow+1;
            nextCol = currCol;
            minDiff = abs(grid[currRow+1][currCol] - grid[currRow][currCol]);
        }
        if(currCol > 0 && abs(grid[currRow][currCol-1] - grid[currRow][currCol]) < minDiff){
            nextRow = currRow;
            nextCol = currCol-1;
            minDiff = abs(grid[currRow][currCol-1] - grid[currRow][currCol]);
        }
        if(currCol < n-1 && abs(grid[currRow][currCol+1] - grid[currRow][currCol]) < minDiff){
            nextRow = currRow;
            nextCol = currCol+1;
            minDiff = abs(grid[currRow][currCol+1] - grid[currRow][currCol]);
        }
        
        // Add the value of the next cell to the path
        path.push_back(grid[nextRow][nextCol]);
        
        // Update the current cell for the next step
        minRow = nextRow;
        minCol = nextCol;
    }
    
    return path;
}