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
    
    // Traverse k-1 cells from the starting cell
    int row = startRow;
    int col = startCol;
    for(int i=0; i<k-1; i++){
        // Find the neighbor cell with the minimum value
        int minNeighborVal = INT_MAX;
        int nextRow, nextCol;
        if(row > 0 && grid[row-1][col] < minNeighborVal){
            minNeighborVal = grid[row-1][col];
            nextRow = row-1;
            nextCol = col;
        }
        if(row < n-1 && grid[row+1][col] < minNeighborVal){
            minNeighborVal = grid[row+1][col];
            nextRow = row+1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minNeighborVal){
            minNeighborVal = grid[row][col-1];
            nextRow = row;
            nextCol = col-1;
        }
        if(col < n-1 && grid[row][col+1] < minNeighborVal){
            minNeighborVal = grid[row][col+1];
            nextRow = row;
            nextCol = col+1;
        }
        
        // Move to the neighbor cell with the minimum value
        row = nextRow;
        col = nextCol;
        path.push_back(minNeighborVal);
    }
    
    return path;
}