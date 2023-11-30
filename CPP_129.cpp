vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with minimum value
    int minValue = grid[0][0];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] < minValue) {
                minValue = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(minValue);
    
    // Move to the next cell with minimum value k times
    for(int i = 1; i < k; i++) {
        // Find the neighboring cells
        int neighbors[4][2] = {{row-1, col}, {row+1, col}, {row, col-1}, {row, col+1}};
        int minNeighborValue = INT_MAX;
        int nextRow = row, nextCol = col;
        
        // Find the neighboring cell with minimum value
        for(int j = 0; j < 4; j++) {
            int neighborRow = neighbors[j][0];
            int neighborCol = neighbors[j][1];
            
            // Check if the neighboring cell is within the grid
            if(neighborRow >= 0 && neighborRow < n && neighborCol >= 0 && neighborCol < n) {
                int neighborValue = grid[neighborRow][neighborCol];
                if(neighborValue < minNeighborValue) {
                    minNeighborValue = neighborValue;
                    nextRow = neighborRow;
                    nextCol = neighborCol;
                }
            }
        }
        
        // Add the neighboring cell with minimum value to the path
        path.push_back(minNeighborValue);
        row = nextRow;
        col = nextCol;
    }
    
    return path;
}