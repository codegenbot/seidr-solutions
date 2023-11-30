vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    path.push_back(grid[0][0]);
    
    int row = 0;
    int col = 0;
    
    while (path.size() < k) {
        if (row == 0 && col == m - 1) {
            row++;
        } else if (row == n - 1 && col == 0) {
            col++;
        } else if (row == n - 1) {
            col++;
        } else if (col == m - 1) {
            row++;
        } else {
            if (grid[row + 1][col] < grid[row][col + 1]) {
                row++;
            } else {
                col++;
            }
        }
        
        path.push_back(grid[row][col]);
    }
    
    return path;
}