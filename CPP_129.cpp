vector<int> minPath(vector<vector<int>> grid, int k){
    int N = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    
    int row = 0, col = 0;
    while(k > 0){
        path.push_back(grid[row][col]);
        visited[row][col] = true;
        
        if(col+1 < N && !visited[row][col+1]){
            col++;
        }
        else if(row+1 < N && !visited[row+1][col]){
            row++;
        }
        else if(col-1 >= 0 && !visited[row][col-1]){
            col--;
        }
        else if(row-1 >= 0 && !visited[row-1][col]){
            row--;
        }
        
        k--;
    }
    
    return path;
}