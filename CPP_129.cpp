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
    
    // Initialize variables for current cell and direction
    int row = minRow;
    int col = minCol;
    int direction = 0; // 0 for right, 1 for down, 2 for left, 3 for up
    
    // Continue until path has length k
    while(path.size() < k){
        // Move to the next cell based on the current direction
        if(direction == 0){
            col++;
            if(col == m || grid[row][col] == -1){
                // If out of bounds or already visited, change direction
                col--;
                direction = 1;
            }
        }
        else if(direction == 1){
            row++;
            if(row == n || grid[row][col] == -1){
                row--;
                direction = 2;
            }
        }
        else if(direction == 2){
            col--;
            if(col == -1 || grid[row][col] == -1){
                col++;
                direction = 3;
            }
        }
        else if(direction == 3){
            row--;
            if(row == -1 || grid[row][col] == -1){
                row++;
                direction = 0;
            }
        }
        
        // Add the value of the current cell to the path
        path.push_back(grid[row][col]);
        
        // Mark the current cell as visited
        grid[row][col] = -1;
    }
    
    return path;
}