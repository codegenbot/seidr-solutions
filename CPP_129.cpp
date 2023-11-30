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
    
    // Move to the next cell k-1 times
    for(int i=0; i<k-1; i++){
        // Find the neighbor cell with the minimum value
        int minNeighbor = INT_MAX;
        int nextRow = row, nextCol = col;
        
        if(row > 0 && grid[row-1][col] < minNeighbor){
            minNeighbor = grid[row-1][col];
            nextRow = row-1;
            nextCol = col;
        }
        if(row < n-1 && grid[row+1][col] < minNeighbor){
            minNeighbor = grid[row+1][col];
            nextRow = row+1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minNeighbor){
            minNeighbor = grid[row][col-1];
            nextRow = row;
            nextCol = col-1;
        }
        if(col < n-1 && grid[row][col+1] < minNeighbor){
            minNeighbor = grid[row][col+1];
            nextRow = row;
            nextCol = col+1;
        }
        
        // Move to the neighbor cell and add its value to the path
        row = nextRow;
        col = nextCol;
        path.push_back(grid[row][col]);
    }
    
    return path;
}