vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the minimum value
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
    
    // Add the starting cell to the path
    path.push_back(minValue);
    
    // Move to the neighbor cell with the minimum value until the path length is k
    while(path.size() < k){
        int minNeighborValue = INT_MAX;
        int nextRow = row, nextCol = col;
        
        // Check the neighbor cells
        if(row > 0 && grid[row - 1][col] < minNeighborValue){
            minNeighborValue = grid[row - 1][col];
            nextRow = row - 1;
            nextCol = col;
        }
        if(row < n - 1 && grid[row + 1][col] < minNeighborValue){
            minNeighborValue = grid[row + 1][col];
            nextRow = row + 1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col - 1] < minNeighborValue){
            minNeighborValue = grid[row][col - 1];
            nextRow = row;
            nextCol = col - 1;
        }
        if(col < n - 1 && grid[row][col + 1] < minNeighborValue){
            minNeighborValue = grid[row][col + 1];
            nextRow = row;
            nextCol = col + 1;
        }
        
        // Move to the neighbor cell with the minimum value
        row = nextRow;
        col = nextCol;
        
        // Add the value of the neighbor cell to the path
        path.push_back(minNeighborValue);
    }
    
    return path;
}