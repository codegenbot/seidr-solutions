int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    return ceil((double)total_water / capacity);
}