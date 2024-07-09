int n = grid.size();
    int m = grid[0].size();
    vector<int> result;
    result.push_back(grid[0][0]); // Start from top-left corner
    int row = 0, col = 0;
    for(int i = 1; i < k; ++i){
        if(col < m - 1 && (row == 0 || grid[row][col+1] > grid[row-1][col])){
            col++;
        } else {
            row++;
        }
        result.push_back(grid[row][col]);
    }
    return result;
}