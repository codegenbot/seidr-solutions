int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = -(-total_water / capacity); // using -(-x/2) trick to round up
    
    return buckets_needed;
}