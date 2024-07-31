int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    if (total_water % capacity > 0) {
        buckets_needed++;
    }
    
    return buckets_needed;
}