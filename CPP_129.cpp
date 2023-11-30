vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the smallest value
    int minVal = grid[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minVal);
    
    // Move to the neighbor cell with the smallest value until path length is k
    while(path.size() < k){
        int nextRow = row, nextCol = col;
        int minNeighbor = INT_MAX;
        
        // Check the neighbors of the current cell
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
        
        // Move to the neighbor cell with the smallest value
        row = nextRow;
        col = nextCol;
        
        // Add the value of the new cell to the path
        path.push_back(grid[row][col]);
    }
    
    return path;
}