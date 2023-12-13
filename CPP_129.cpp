vector<int> minPath(vector<vector<int>> grid, int k){
    int N = grid.size();
    int row = 0;
    int col = 0;
    vector<int> path;
    
    for(int i = 0; i < k; i++){
        path.push_back(grid[row][col]);
        
        if(i % 2 == 0){
            if(col < N - 1){
                col++;
            } else {
                row++;
            }
        } else {
            if(col > 0){
                col--;
            } else {
                row++;
            }
        }
    }
    
    return path;
}