int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    for (int i = 0; i <= total_water / capacity; i++) {
        int current_water = 0;
        int fill_times = 0;
        for (int j = 0; j < n; j++) {
            current_water += accumulate(grid[j].begin(), grid[j].end(), 0);
            while (current_water > capacity) {
                current_water -= capacity;
                fill_times++;
            }
        }
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}