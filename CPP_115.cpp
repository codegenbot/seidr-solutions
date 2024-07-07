Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    while (total_water > capacity) {
        int water_per_bucket = min(capacity, total_water);
        total_water -= water_per_bucket;
        max_fill_times++;
    }
    
    return max_fill_times;
}