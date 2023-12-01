vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the starting cell with the smallest value
    int minVal = grid[0][0];
    int startRow = 0, startCol = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(minVal);
    
    // Keep track of visited cells
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[startRow][startCol] = true;
    
    // Perform DFS to find the minimum path
    dfs(grid, path, visited, startRow, startCol, k-1);
    
    return path;
}

void dfs(vector<vector<int>>& grid, vector<int>& path, vector<vector<bool>>& visited, int row, int col, int k){
    if(k == 0){
        return;
    }
    
    int n = grid.size();
    
    // Check all neighbor cells
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    for(int i = 0; i < 4; i++){
        int newRow = row + dx[i];
        int newCol = col + dy[i];
        
        // Check if the new cell is within the grid and not visited
        if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && !visited[newRow][newCol]){
            // Add the value of the new cell to the path
            path.push_back(grid[newRow][newCol]);
            visited[newRow][newCol] = true;
            
            // Recursively explore the next cell
            dfs(grid, path, visited, newRow, newCol, k-1);
            
            // If the path is complete, return
            if(path.size() == k+1){
                return;
            }
            
            // Backtrack by removing the value from the path and marking the cell as unvisited
            path.pop_back();
            visited[newRow][newCol] = false;
        }
    }
}