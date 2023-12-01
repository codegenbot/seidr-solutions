vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[row][col]);
        
        if((row + col) % 2 == 0){
            if(col == n - 1){
                row++;
            }else{
                col++;
            }
        }else{
            if(row == 0){
                col++;
            }else{
                row--;
            }
        }
    }
    
    return path;
}