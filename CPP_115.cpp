int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int total_buckets = total_water / capacity + ((total_water % capacity) != 0);
    
    return total_buckets;
}