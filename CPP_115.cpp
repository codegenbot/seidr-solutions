size_t max_fill(const vector<vector<int>>& grid, int capacity) {
    size_t total_water = 0;
    size_t rows = grid.size();
    size_t cols = grid[0].size();
    for(size_t i=0; i<rows; i++){
        for(size_t j=0; j<cols; j++){
            total_water += grid[i][j];
        }
    }
    return (total_water + capacity - 1) / capacity;
}