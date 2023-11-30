vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int row = 0, col = 0;
    
    while(k > 0){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        k--;
        
        if(k == 0){
            break;
        }
        
        // Check if there is a neighbor cell that has not been visited
        if(row > 0 && !visited[row-1][col]){
            row--;
        }
        else if(row < n-1 && !visited[row+1][col]){
            row++;
        }
        else if(col > 0 && !visited[row][col-1]){
            col--;
        }
        else if(col < n-1 && !visited[row][col+1]){
            col++;
        }
    }
    
    return path;
}