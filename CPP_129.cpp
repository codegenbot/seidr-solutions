vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    int row = 0;
    int col = 0;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[row][col]);
        
        if(row % 2 == 0){
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
    }
    
    return path;
}