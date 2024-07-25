int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    for (int i = 0; i <= total_water / capacity; i++) {
        int fill_times = 0;
        int remaining_water = 0;
        for (int j = 0; j < n; j++) {
            int water_in_well = accumulate(grid[j].begin(), grid[j].end(), 0);
            if (water_in_well > capacity) {
                fill_times += (water_in_well - 1) / capacity + 1;
                remaining_water += (water_in_well - 1) % capacity;
            } else {
                fill_times += water_in_well / capacity;
                remaining_water = water_in_well % capacity;
            }
        }
        
        while (remaining_water > 0) {
            fill_times++;
            int bucket_capacity_left = capacity;
            for (int j = 0; j < n; j++) {
                if (grid[j].back() == 1) {
                    int water_in_well = accumulate(grid[j].begin(), grid[j].end() - 1, 0);
                    if (water_in_well > bucket_capacity_left) {
                        fill_times++;
                        bucket_capacity_left = capacity;
                    } else {
                        bucket_capacity_left -= water_in_well;
                    }
                }
            }
            remaining_water -= capacity;
        }
        
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}