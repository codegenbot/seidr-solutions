vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    
    int currRow = 0;
    int currCol = 0;
    int steps = 0;
    
    while(steps < k){
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        
        // Check if there is a neighbor cell to move to
        if(currCol+1 < m && !visited[currRow][currCol+1]){
            currCol++;
        }
        else if(currRow+1 < n && !visited[currRow+1][currCol]){
            currRow++;
        }
        else if(currCol-1 >= 0 && !visited[currRow][currCol-1]){
            currCol--;
        }
        else if(currRow-1 >= 0 && !visited[currRow-1][currCol]){
            currRow--;
        }
        
        steps++;
    }
    
    return path;
}