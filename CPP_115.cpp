Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_times = -1;
    for (int times = 0; times * capacity <= total_water; times++) {
        bool empty_all_buckets = true;
        for (int i = 0; i < n; i++) {
            int remaining_water = accumulate(grid[i].begin(), grid[i].end(), 0);
            if (remaining_water > 0) {
                empty_all_buckets = false;
                break;
            }
        }
        
        if (empty_all_buckets) {
            max_times = times;
            break;
        }
    }
    
    return max_times;
}