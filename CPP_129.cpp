vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0;
    int col = 0;
    
    // Find the starting cell with the smallest value
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                row = i;
                col = j;
                break;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(grid[row][col]);
    
    // Move to the next cell k-1 times
    for(int i = 0; i < k-1; i++){
        // Check if there is a neighbor cell with a smaller value
        if(row > 0 && grid[row-1][col] < grid[row][col]){
            row--;
        }
        else if(row < n-1 && grid[row+1][col] < grid[row][col]){
            row++;
        }
        else if(col > 0 && grid[row][col-1] < grid[row][col]){
            col--;
        }
        else if(col < n-1 && grid[row][col+1] < grid[row][col]){
            col++;
        }
        
        // Add the value of the current cell to the path
        path.push_back(grid[row][col]);
    }
    
    return path;
}