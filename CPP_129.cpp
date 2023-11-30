vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
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
    
    // Add the starting cell value to the path
    path.push_back(minVal);
    
    // Start exploring the grid
    int currRow = startRow;
    int currCol = startCol;
    int steps = 1;
    while(steps < k){
        // Check the neighbors of the current cell
        int minNeighbor = INT_MAX;
        int nextRow, nextCol;
        if(currRow > 0 && grid[currRow-1][currCol] < minNeighbor){
            minNeighbor = grid[currRow-1][currCol];
            nextRow = currRow-1;
            nextCol = currCol;
        }
        if(currRow < n-1 && grid[currRow+1][currCol] < minNeighbor){
            minNeighbor = grid[currRow+1][currCol];
            nextRow = currRow+1;
            nextCol = currCol;
        }
        if(currCol > 0 && grid[currRow][currCol-1] < minNeighbor){
            minNeighbor = grid[currRow][currCol-1];
            nextRow = currRow;
            nextCol = currCol-1;
        }
        if(currCol < n-1 && grid[currRow][currCol+1] < minNeighbor){
            minNeighbor = grid[currRow][currCol+1];
            nextRow = currRow;
            nextCol = currCol+1;
        }
        
        // Move to the cell with the minimum neighbor value
        currRow = nextRow;
        currCol = nextCol;
        path.push_back(grid[currRow][currCol]);
        
        steps++;
    }
    
    return path;
}