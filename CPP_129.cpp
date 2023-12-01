vector<int> minPath(vector<vector<int>> grid, int k){
    int N = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the smallest value
    int minVal = grid[0][0];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minVal);
    
    // Find the k-1 smallest values in the neighboring cells
    for(int i=1; i<k; i++){
        int minValue = INT_MAX;
        int nextRow = row, nextCol = col;
        
        // Check the neighboring cells for the smallest value
        if(row > 0 && grid[row-1][col] < minValue){
            minValue = grid[row-1][col];
            nextRow = row-1;
            nextCol = col;
        }
        if(row < N-1 && grid[row+1][col] < minValue){
            minValue = grid[row+1][col];
            nextRow = row+1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minValue){
            minValue = grid[row][col-1];
            nextRow = row;
            nextCol = col-1;
        }
        if(col < N-1 && grid[row][col+1] < minValue){
            minValue = grid[row][col+1];
            nextRow = row;
            nextCol = col+1;
        }
        
        // Update the current cell to the next cell with the smallest value
        row = nextRow;
        col = nextCol;
        
        // Add the smallest value to the path
        path.push_back(minValue);
    }
    
    return path;
}