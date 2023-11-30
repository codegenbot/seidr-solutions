vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the starting cell with the minimum value
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
    
    // Add the starting cell to the path
    path.push_back(minVal);
    
    // Perform k-1 steps to find the remaining cells in the path
    int currRow = startRow;
    int currCol = startCol;
    for(int step=1; step<k; step++){
        // Find the neighbor cell with the minimum value
        int minNeighborVal = INT_MAX;
        int nextRow, nextCol;
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
        
        // Add the next cell to the path
        path.push_back(minNeighborVal);
        
        // Move to the next cell
        currRow = nextRow;
        currCol = nextCol;
    }
    
    return path;
}