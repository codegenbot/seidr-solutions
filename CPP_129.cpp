vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int row = 0, col = 0;
    while(k > 0){
        path.push_back(grid[row][col]);
        if(row % 2 == 0){
            if(col < m-1){
                col++;
            }else{
                row++;
            }
        }else{
            if(col > 0){
                col--;
            }else{
                row++;
            }
        }
        k--;
    }
    return path;
}