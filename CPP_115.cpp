int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    for (int i = capacity; i > 0; --i) {
        int water_left = total_water;
        int fill_times = 0;
        
        for (int j = 0; j < n; j++) {
            int water_in_well = accumulate(grid[j].begin(), grid[j].end(), 0);
            if (water_in_well > i) {
                water_left -= i;
                fill_times++;
            } else {
                water_left -= water_in_well;
                fill_times++;
            }
        }
        
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}