int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    while (total_water > 0) {
        int water_taken = min(total_water, capacity);
        total_water -= water_taken;
        max_fill_times++;
    }
    
    return max_fill_times;
}