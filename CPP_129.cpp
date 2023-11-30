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
    
    // Mark the starting cell as visited
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[startX][startY] = true;
    
    // Add the starting cell value to the path
    path.push_back(minVal);
    
    // Perform DFS to find the minimum path
    dfs(grid, startX, startY, k-1, path, visited);
    
    return path;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>& path, vector<vector<bool>>& visited){
    if(k == 0){
        return;
    }
    
    int n = grid.size();
    int m = grid[0].size();
    
    // Find the neighbor cell with the smallest value
    int minVal = INT_MAX;
    int nextX, nextY;
    for(int i=-1; i<=1; i++){
        for(int j=-1; j<=1; j++){
            int newX = x + i;
            int newY = y + j;
            if(newX >= 0 && newX < n && newY >= 0 && newY < m && !visited[newX][newY]){
                if(grid[newX][newY] < minVal){
                    minVal = grid[newX][newY];
                    nextX = newX;
                    nextY = newY;
                }
            }
        }
    }
    
    // Mark the next cell as visited
    visited[nextX][nextY] = true;
    
    // Add the next cell value to the path
    path.push_back(minVal);
    
    // Recursively perform DFS on the next cell
    dfs(grid, nextX, nextY, k-1, path, visited);
}