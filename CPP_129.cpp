vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    
    // Find the starting cell with minimum value
    int minVal = INT_MAX;
    int startRow, startCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the minimum value to the path
    path.push_back(minVal);
    
    // Perform k-1 steps to find the remaining path
    int currRow = startRow;
    int currCol = startCol;
    for(int step=1; step<k; step++){
        // Check all neighbor cells
        int nextRow, nextCol;
        int minNeighbor = INT_MAX;
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                int newRow = currRow + i;
                int newCol = currCol + j;
                if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m){
                    if(grid[newRow][newCol] < minNeighbor){
                        minNeighbor = grid[newRow][newCol];
                        nextRow = newRow;
                        nextCol = newCol;
                    }
                }
            }
        }
        
        // Move to the neighbor with minimum value
        currRow = nextRow;
        currCol = nextCol;
        path.push_back(minNeighbor);
    }
    
    return path;
}