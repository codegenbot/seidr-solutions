int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water += 1;
            }
        }
    }
    
    int bucket_cycles = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    while (remaining_water > 0) {
        for (int i = 0; i < rows; i++) {
            if (grid[i][cols - 1] == 1) {
                grid[i][cols - 1] = 0;
                remaining_water--;
                if (remaining_water == 0) break;
            }
        }
        bucket_cycles++;
    }
    
    return bucket_cycles;
}