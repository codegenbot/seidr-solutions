int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water += grid[i][j];
            }
        }
    }
    
    int max_lowering = total_water / capacity;
    return max_lowering + (total_water % capacity > 0);
}