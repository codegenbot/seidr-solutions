int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int ans = 0;
    
    for (int i = 0; i < rows; ++i) {
        int water_in_well = 0;
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }
        
        while (water_in_well > 0) {
            int bucket_water = min(water_in_well, capacity);
            water_in_well -= bucket_water;
            ans++;
        }
    }
    
    return ans;
}