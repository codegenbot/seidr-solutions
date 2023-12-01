vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int row = 0, col = 0;
    int dir = 0;
    
    while(k > 0){
        path.push_back(grid[row][col]);
        k--;
        
        if(dir == 0){
            if(col + 1 < m){
                col++;
            }
            else{
                row++;
            }
        }
        else{
            if(col - 1 >= 0){
                col--;
            }
            else{
                row++;
            }
        }
        
        if(row >= n){
            row--;
            dir = 1 - dir;
        }
    }
    
    return path;
}