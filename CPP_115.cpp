int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            total_water += grid[i][j];
        }
    }
    
    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;
    
    while (current_water < total_water) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                current_water += grid[i][j];
                if (current_water >= capacity) {
                    fill_times++;
                    current_water -= capacity;
                }
            }
        }
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}