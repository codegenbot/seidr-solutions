int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int moves = 0;
    
    for (int col = 0; col < grid[0].size(); col++) {
        for (int row = 0; row < grid.size(); row++) {
            total_water += grid[row][col];
        }
        
        while (total_water > 0) {
            total_water -= min(total_water, capacity);
            moves++;
        }
    }
    
    return moves;
}