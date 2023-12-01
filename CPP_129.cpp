vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = INT_MAX;
    int minRow, minCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // Add the minimum value to the path
    path.push_back(minVal);
    
    // Mark the minimum value as visited
    grid[minRow][minCol] = -1;
    
    // Perform k-1 steps
    for(int step=1; step<k; step++){
        int currRow = minRow;
        int currCol = minCol;
        
        int nextRow, nextCol;
        int minDiff = INT_MAX;
        
        // Find the neighbor with the minimum difference in value
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if(i == 0 && j == 0) continue;
                
                int newRow = currRow + i;
                int newCol = currCol + j;
                
                if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] != -1){
                    int diff = abs(grid[newRow][newCol] - grid[currRow][currCol]);
                    if(diff < minDiff){
                        minDiff = diff;
                        nextRow = newRow;
                        nextCol = newCol;
                    }
                }
            }
        }
        
        // Add the value of the neighbor with minimum difference to the path
        path.push_back(grid[nextRow][nextCol]);
        
        // Mark the neighbor as visited
        grid[nextRow][nextCol] = -1;
        
        // Update the current position
        minRow = nextRow;
        minCol = nextCol;
    }
    
    return path;
}