int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int moves = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            total_water += grid[i][j];
        }
    }
    
    while (total_water > 0) {
        int buckets_needed = (total_water + capacity - 1) / capacity;
        moves += buckets_needed;
        total_water = max(0, total_water - buckets_needed * capacity);
    }
    
    return moves;
}