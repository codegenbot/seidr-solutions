vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    for(int i = 0; i < k; ++i){
        path.push_back(grid[row][col]);
        if((row + col) % 2 == 0){
            if(col == n - 1) ++row;
            else if(row == 0) ++col;
            else if(grid[row - 1][col] > grid[row][col + 1]) ++col;
            else ++row;
        } else {
            if(row == n - 1) ++col;
            else if(col == 0) ++row;
            else if(grid[row][col - 1] > grid[row + 1][col]) ++row;
            else ++col;
        }
    }
    return path;
}