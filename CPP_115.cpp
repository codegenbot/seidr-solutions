int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
    }
    
    int max_lowerings = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    while (remaining_water > 0) {
        max_lowerings++;
        remaining_water -= capacity;
        if (remaining_water < 0) break;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j]--;
                    remaining_water--;
                    if (remaining_water <= 0) break;
                }
            }
            if (remaining_water <= 0) break;
        }
    }
    
    return max_lowerings;
}