int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    for (int i = capacity; i <= total_water; i++) {
        int fill_times = 0;
        int current_water = 0;
        bool can_fill = true;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < grid[j].size(); k++) {
                if (grid[j][k] > 0) {
                    current_water += min(grid[j][k], i);
                    if (current_water > i) {
                        can_fill = false;
                        break;
                    }
                }
            }
            if (!can_fill) {
                break;
            }
        }
        
        if (can_fill) {
            fill_times = (total_water + capacity - 1) / capacity;
            max_fill_times = max(max_fill_times, fill_times);
        }
    }
    
    return max_fill_times;
}