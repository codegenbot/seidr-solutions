vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int startRow = 0;
    int startCol = 0;
    
    // Find the starting cell with the smallest value
    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minValue){
                minValue = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(grid[startRow][startCol]);
    
    // Move to the neighboring cells until the path length is k
    while(path.size() < k){
        int currentRow = startRow;
        int currentCol = startCol;
        
        // Find the neighboring cell with the smallest value
        int minNeighborValue = INT_MAX;
        int nextRow = -1;
        int nextCol = -1;
        
        // Check the cell above
        if(currentRow > 0 && grid[currentRow-1][currentCol] < minNeighborValue){
            minNeighborValue = grid[currentRow-1][currentCol];
            nextRow = currentRow-1;
            nextCol = currentCol;
        }
        
        // Check the cell below
        if(currentRow < n-1 && grid[currentRow+1][currentCol] < minNeighborValue){
            minNeighborValue = grid[currentRow+1][currentCol];
            nextRow = currentRow+1;
            nextCol = currentCol;
        }
        
        // Check the cell to the left
        if(currentCol > 0 && grid[currentRow][currentCol-1] < minNeighborValue){
            minNeighborValue = grid[currentRow][currentCol-1];
            nextRow = currentRow;
            nextCol = currentCol-1;
        }
        
        // Check the cell to the right
        if(currentCol < m-1 && grid[currentRow][currentCol+1] < minNeighborValue){
            minNeighborValue = grid[currentRow][currentCol+1];
            nextRow = currentRow;
            nextCol = currentCol+1;
        }
        
        // Add the neighboring cell to the path
        path.push_back(grid[nextRow][nextCol]);
        
        // Update the current cell
        startRow = nextRow;
        startCol = nextCol;
    }
    
    return path;
}