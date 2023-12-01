vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path(k);
    
    // Find the starting cell with minimum value
    int minVal = INT_MAX;
    int startRow, startCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Initialize the path with the minimum value
    path[0] = minVal;
    
    // Initialize the current position
    int currRow = startRow;
    int currCol = startCol;
    
    // Move to the neighbor cell with minimum value until the path length is k
    for(int i=1; i<k; i++){
        int minNeighborVal = INT_MAX;
        int nextRow, nextCol;
        
        // Check the neighbor cells
        if(currRow > 0 && grid[currRow-1][currCol] < minNeighborVal){
            minNeighborVal = grid[currRow-1][currCol];
            nextRow = currRow-1;
            nextCol = currCol;
        }
        if(currRow < n-1 && grid[currRow+1][currCol] < minNeighborVal){
            minNeighborVal = grid[currRow+1][currCol];
            nextRow = currRow+1;
            nextCol = currCol;
        }
        if(currCol > 0 && grid[currRow][currCol-1] < minNeighborVal){
            minNeighborVal = grid[currRow][currCol-1];
            nextRow = currRow;
            nextCol = currCol-1;
        }
        if(currCol < n-1 && grid[currRow][currCol+1] < minNeighborVal){
            minNeighborVal = grid[currRow][currCol+1];
            nextRow = currRow;
            nextCol = currCol+1;
        }
        
        // Update the current position and add the minimum neighbor value to the path
        currRow = nextRow;
        currCol = nextCol;
        path[i] = minNeighborVal;
    }
    
    return path;
}