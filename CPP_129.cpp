vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int currRow = 0, currCol = 0;
    
    while(k > 0){
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        k--;
        
        // Check if there is a neighbor cell that is not visited
        if(currRow+1 < n && !visited[currRow+1][currCol]){
            currRow++;
        }
        else if(currCol+1 < n && !visited[currRow][currCol+1]){
            currCol++;
        }
        else{
            break;
        }
    }
    
    return path;
}