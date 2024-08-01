int max_fill(const vector<vector<int>>& grid, int capacity) {
    int count = 0;
    
    for (int j = 0; j < grid[0].size(); ++j) {
        int water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            water += grid[i][j];
        }
        count += (water / capacity) + (water % capacity != 0);
    }
    
    return count;
}