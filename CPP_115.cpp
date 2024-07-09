int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    
    for (vector<int> row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    return total_water / capacity + (total_water % capacity ? 1 : 0);
}