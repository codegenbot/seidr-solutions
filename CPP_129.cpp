vector<int> minPath(vector<vector<int>> grid, int k){
  vector<int> path;
  int n = grid.size();
  int m = grid[0].size();
  
  // Find the starting cell with the smallest value
  int minVal = INT_MAX;
  int startX, startY;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(grid[i][j] < minVal){
        minVal = grid[i][j];
        startX = i;
        startY = j;
      }
    }
  }
  
  // Perform a DFS to find the minimum path
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  dfs(grid, startX, startY, k, path, visited);
  
  return path;
}