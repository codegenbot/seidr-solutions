vector<int> minPath(vector<vector<int>> grid, int k){
  int n = grid.size();
  
  // initialize variables
  int row = 0, col = 0, count = 0;
  
  // store the minimum path values
  vector<int> path;
  
  // check if k is less than n
  if(k <= n){
    while(count < k){
      // add the current value to path
      path.push_back(grid[row][col]);
      count++;
      
      // move to the next cell
      if(col < n - 1){
        col++;
      }
      else{
        row++;
      }
    }
  }
  else{
    // calculate the number of complete cycles
    int cycles = (k - n) / (2 * (n - 1));
    int remaining = (k - n) % (2 * (n - 1));
    
    // add the values from the first row
    for(int i = 0; i < n; i++){
      path.push_back(grid[0][i]);
    }
    
    // add the values from last column
    for(int i = 1; i < n; i++){
      path.push_back(grid[i][n - 1]);
    }
    
    // add the values from the last row in reverse order
    for(int i = n - 2; i >= 0; i--){
      path.push_back(grid[n - 1][i]);
    }
    
    // add the values from the first column in reverse order
    for(int i = n - 2; i >= 1; i--){
      path.push_back(grid[i][0]);
    }
    
    // add the values from the remaining part of the path
    row = 1;
    col = 1;
    count = n * 2 - 4;
    
    while(count < k){
      // add the current value to path
      path.push_back(grid[row][col]);
      count++;
      
      // move to the next cell
      if(col < n - 1){
        col++;
      }
      else{
        row++;
      }
    }
  }
  
  return path;
}