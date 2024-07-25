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
            int well_water = accumulate(grid[j].begin(), grid[j].end(), 0);
            if (well_water > i) {
                fill_times += (well_water - i + i - 1) / i;
                water_left -= (well_water - i + i - 1);
            } else {
                fill_times += well_water / i;
                water_left -= well_water % i;
            }
        }
        
        if (water_left == 0) {
            max_fill_times = i;
            break;
        }
    }
    
    return max_fill_times;
}