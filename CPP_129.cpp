vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    path.push_back(grid[0][0]);
    
    int row = 0;
    int col = 0;
    
    while(path.size() < k){
        if(col + 1 < m){
            col++;
        }
        else if(row + 1 < n){
            row++;
        }
        
        path.push_back(grid[row][col]);
    }
    
    return path;
}