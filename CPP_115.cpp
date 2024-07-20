int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int bucket_usage = 0;
    while (total_water > 0) {
        int water_to_remove = min(capacity, total_water);
        total_water -= water_to_remove;
        bucket_usage++;
    }
    
    return bucket_usage;
}