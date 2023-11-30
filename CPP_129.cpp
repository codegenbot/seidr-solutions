vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    int currRow = 0;
    int currCol = 0;
    
    // Find the cell with the smallest value
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 1){
                currRow = i;
                currCol = j;
                break;
            }
        }
    }
    
    // Add the smallest value to the path
    path.push_back(grid[currRow][currCol]);
    
    // Move k-1 times to find the next smallest value
    for(int i=0; i<k-1; i++){
        // Check if there is a smaller value in the neighboring cells
        int smallest = INT_MAX;
        int nextRow = currRow;
        int nextCol = currCol;
        
        // Check the cell above
        if(currRow-1 >= 0 && grid[currRow-1][currCol] < smallest){
            smallest = grid[currRow-1][currCol];
            nextRow = currRow-1;
            nextCol = currCol;
        }
        
        // Check the cell below
        if(currRow+1 < n && grid[currRow+1][currCol] < smallest){
            smallest = grid[currRow+1][currCol];
            nextRow = currRow+1;
            nextCol = currCol;
        }
        
        // Check the cell to the left
        if(currCol-1 >= 0 && grid[currRow][currCol-1] < smallest){
            smallest = grid[currRow][currCol-1];
            nextRow = currRow;
            nextCol = currCol-1;
        }
        
        // Check the cell to the right
        if(currCol+1 < m && grid[currRow][currCol+1] < smallest){
            smallest = grid[currRow][currCol+1];
            nextRow = currRow;
            nextCol = currCol+1;
        }
        
        // Move to the cell with the smallest value
        currRow = nextRow;
        currCol = nextCol;
        path.push_back(grid[currRow][currCol]);
    }
    
    return path;
}