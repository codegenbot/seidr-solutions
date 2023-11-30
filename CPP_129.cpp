vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    // Find the minimum value in the grid
    int minVal = INT_MAX;
    int minRow, minCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // Perform DFS to find the minimum path
    dfs(grid, visited, minRow, minCol, k, path);
    
    return path;
}