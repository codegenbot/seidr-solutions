int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int steps = 0;
    while (total_water > 0) {
        bool filled_bucket = false;
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1) {
                total_water -= capacity;
                grid[i].erase(grid[i].begin());
                filled_bucket = true;
            }
        }
        
        if (!filled_bucket) break;
        
        steps++;
    }
    
    return steps;
}