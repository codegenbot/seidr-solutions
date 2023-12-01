vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    int minVal = grid[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    path.push_back(minVal);
    
    while(path.size() < k){
        int minValue = INT_MAX;
        int nextRow = row;
        int nextCol = col;
        
        if(row > 0 && grid[row-1][col] < minValue){
            minValue = grid[row-1][col];
            nextRow = row - 1;
            nextCol = col;
        }
        if(row < n-1 && grid[row+1][col] < minValue){
            minValue = grid[row+1][col];
            nextRow = row + 1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minValue){
            minValue = grid[row][col-1];
            nextRow = row;
            nextCol = col - 1;
        }
        if(col < n-1 && grid[row][col+1] < minValue){
            minValue = grid[row][col+1];
            nextRow = row;
            nextCol = col + 1;
        }
        
        row = nextRow;
        col = nextCol;
        
        path.push_back(minValue);
    }
    
    return path;
}