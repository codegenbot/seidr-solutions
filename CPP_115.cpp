int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int bucket_cycles = -(-total_water / capacity); // Ceiling division
    
    return bucket_cycles;
}