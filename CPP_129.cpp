vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    
    // Find the starting cell with the smallest value
    int minVal = grid[0][0];
    int startRow = 0, startCol = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(minVal);
    
    // Explore the grid to find the minimum path
    int currRow = startRow;
    int currCol = startCol;
    while(path.size() < k){
        // Check the neighbors of the current cell
        int nextRow = -1, nextCol = -1;
        int minNeighbor = INT_MAX;
        
        // Check the top neighbor
        if(currRow > 0 && grid[currRow-1][currCol] < minNeighbor){
            nextRow = currRow-1;
            nextCol = currCol;
            minNeighbor = grid[currRow-1][currCol];
        }
        
        // Check the bottom neighbor
        if(currRow < n-1 && grid[currRow+1][currCol] < minNeighbor){
            nextRow = currRow+1;
            nextCol = currCol;
            minNeighbor = grid[currRow+1][currCol];
        }
        
        // Check the left neighbor
        if(currCol > 0 && grid[currRow][currCol-1] < minNeighbor){
            nextRow = currRow;
            nextCol = currCol-1;
            minNeighbor = grid[currRow][currCol-1];
        }
        
        // Check the right neighbor
        if(currCol < m-1 && grid[currRow][currCol+1] < minNeighbor){
            nextRow = currRow;
            nextCol = currCol+1;
            minNeighbor = grid[currRow][currCol+1];
        }
        
        // Move to the neighbor with the smallest value
        currRow = nextRow;
        currCol = nextCol;
        path.push_back(minNeighbor);
    }
    
    return path;
}