int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_time = total_water / capacity;
    if (total_water % capacity != 0) {
        max_fill_time++;
    }
    
    return max_fill_time;
}