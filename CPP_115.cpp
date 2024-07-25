int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    for (int i = capacity; i <= total_water; i++) {
        int fill_times = 0;
        int remaining_water = total_water;
        while (remaining_water > 0) {
            int water_to_fill = min(i, remaining_water);
            remaining_water -= water_to_fill;
            fill_times++;
        }
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}