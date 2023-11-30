vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the minimum value
    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] < minValue){
                minValue = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minValue);
    
    // Move k-1 times to find the remaining path
    for(int i=1; i<k; i++){
        // Check the neighbors of the current cell
        int neighborValue = INT_MAX;
        int nextRow, nextCol;
        
        // Check top neighbor
        if(row > 0 && grid[row-1][col] < neighborValue){
            neighborValue = grid[row-1][col];
            nextRow = row-1;
            nextCol = col;
        }
        
        // Check left neighbor
        if(col > 0 && grid[row][col-1] < neighborValue){
            neighborValue = grid[row][col-1];
            nextRow = row;
            nextCol = col-1;
        }
        
        // Check right neighbor
        if(col < n-1 && grid[row][col+1] < neighborValue){
            neighborValue = grid[row][col+1];
            nextRow = row;
            nextCol = col+1;
        }
        
        // Check bottom neighbor
        if(row < n-1 && grid[row+1][col] < neighborValue){
            neighborValue = grid[row+1][col];
            nextRow = row+1;
            nextCol = col;
        }
        
        // Update the current cell and add its value to the path
        row = nextRow;
        col = nextCol;
        path.push_back(grid[row][col]);
    }
    
    return path;
}