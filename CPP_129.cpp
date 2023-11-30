vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the smallest value
    int minValue = grid[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minValue){
                minValue = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minValue);
    
    // Move to the neighboring cell with the smallest value
    for(int step = 1; step < k; step++){
        int nextRow = row, nextCol = col;
        int minNeighborValue = INT_MAX;
        
        // Check all neighboring cells
        if(row > 0 && grid[row-1][col] < minNeighborValue){
            minNeighborValue = grid[row-1][col];
            nextRow = row - 1;
            nextCol = col;
        }
        if(row < n-1 && grid[row+1][col] < minNeighborValue){
            minNeighborValue = grid[row+1][col];
            nextRow = row + 1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minNeighborValue){
            minNeighborValue = grid[row][col-1];
            nextRow = row;
            nextCol = col - 1;
        }
        if(col < n-1 && grid[row][col+1] < minNeighborValue){
            minNeighborValue = grid[row][col+1];
            nextRow = row;
            nextCol = col + 1;
        }
        
        // Move to the neighboring cell with the smallest value
        row = nextRow;
        col = nextCol;
        
        // Add the cell value to the path
        path.push_back(grid[row][col]);
    }
    
    return path;
}