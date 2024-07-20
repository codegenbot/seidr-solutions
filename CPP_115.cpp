int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    
    for (int i = 0; i < rows; i++) {
        int total_water = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        
        while (total_water > 0) {
            int water_to_take = min(capacity, total_water);
            ans += capacity;
            total_water -= water_to_take;
        }
    }
    
    return ans;
}