int max_fill(vector<vector<int>> grid, int capacity) {
    int num_buckets = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(grid[i][j] == 1) {
                num_buckets += (grid[i][j] + capacity - 1) / capacity;
            }
        }
    }
    
    return num_buckets;
}