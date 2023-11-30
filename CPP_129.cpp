vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int row = 0, col = 0;
    int count = 0;
    
    while(count < k){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        count++;
        
        if(col+1 < n && !visited[row][col+1]){
            col++;
        }
        else if(row+1 < n && !visited[row+1][col]){
            row++;
        }
        else if(col-1 >= 0 && !visited[row][col-1]){
            col--;
        }
        else if(row-1 >= 0 && !visited[row-1][col]){
            row--;
        }
    }
    
    return path;
}