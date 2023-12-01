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
    
    // Add the starting value to the path
    path.push_back(minVal);
    
    // Find the minimum path
    while(path.size() < k){
        int currRow = startRow;
        int currCol = startCol;
        int nextRow, nextCol;
        int minValue = INT_MAX;
        
        // Find the neighbor cell with minimum value
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if(i != 0 || j != 0){
                    int newRow = currRow + i;
                    int newCol = currCol + j;
                    if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m){
                        if(grid[newRow][newCol] < minValue){
                            minValue = grid[newRow][newCol];
                            nextRow = newRow;
                            nextCol = newCol;
                        }
                    }
                }
            }
        }
        
        // Add the minimum value to the path
        path.push_back(minValue);
        
        // Update the current cell
        startRow = nextRow;
        startCol = nextCol;
    }
    
    return path;
}