vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int count = 0;
    int row = 0;
    int col = 0;
    
    while(count < k){
        path.push_back(grid[row][col]);
        count++;
        
        if(row % 2 == 0){
            if(col == n-1){
                row++;
            }else{
                col++;
            }
        }else{
            if(col == 0){
                row++;
            }else{
                col--;
            }
        }
    }
    
    return path;
}