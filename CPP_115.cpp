Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    if (total_water <= capacity)
        return 0;
    
    int max_times = -1;
    for (int i = capacity; i > 0; i--) {
        int curr_total_water = 0;
        int times = 0;
        for (int j = 0; j < n; j++) {
            curr_total_water += accumulate(grid[j].begin(), grid[j].end(), 0);
            if (curr_total_water <= i) {
                continue;
            }
            int left_over = curr_total_water - i;
            times += left_over / i + (left_over % i != 0);
        }
        max_times = max(max_times, times);
    }
    
    return max_times;
}