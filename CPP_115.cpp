int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int result = 0;
    
    for (int i = 0; i < rows; i++) {
        int water = 0;
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                water += grid[i][j];
            }
        }
        
        while (water > 0) {
            int bucket_fill = min(water, capacity);
            water -= bucket_fill;
            result++;
            if (water > 0) {
                result += (bucket_fill / capacity);
            }
        }
    }
    
    return result;
}