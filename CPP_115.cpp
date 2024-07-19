int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    int current_water = 0;
    for (int fill_times = 0; ; fill_times++) {
        current_water = 0;
        for (int i = 0; i < n; i++) {
            int water_in_well = accumulate(grid[i].begin(), grid[i].end(), 0);
            if (water_in_well > capacity) {
                current_water += capacity;
                for (int j = 0; j < n; j++) {
                    grid[j][i] -= capacity;
                }
            } else {
                current_water += water_in_well;
                for (int j = 0; j < n; j++) {
                    grid[j][i] = 0;
                }
            }
        }
        
        if (current_water == 0) {
            max_fill_times = fill_times;
            break;
        }
    }
    
    return max_fill_times;
}