int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int min_bucket_needed = total_water / capacity;
    if (total_water % capacity != 0)
        min_bucket_needed++;
    
    return min_bucket_needed;
}