vector<int> minPath(vector<vector<int>> grid, int k){
    // TODO: Complete the code
    vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    
    // Find the starting cell
    int startRow = 0, startCol = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 1){
                startRow = i;
                startCol = j;
                break;
            }
        }
    }
    
    // Mark the starting cell as visited
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[startRow][startCol] = true;
    
    // Perform DFS to find the minimum path
    dfs(grid, visited, startRow, startCol, k, path);
    
    return path;
}