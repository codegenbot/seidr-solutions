int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    
    for (vector<int> row : grid) {
        for (int water : row) {
            total_water += water;
        }
    }
    
    return total_water / capacity + ((total_water % capacity) != 0);
}