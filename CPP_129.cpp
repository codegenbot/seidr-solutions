vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    int row = 0, col = 0;
    
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[row][col]);
        
        if ((row + col) % 2 == 0) {
            if (col == n - 1) {
                row++;
            } else if (row == 0) {
                col++;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == n - 1) {
                col++;
            } else if (col == 0) {
                row++;
            } else {
                row++;
                col--;
            }
        }
    }
    
    return result;
}