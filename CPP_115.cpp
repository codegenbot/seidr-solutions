int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = 0;
    for (const auto& row : grid) {
        int row_fill = std::accumulate(row.begin(), row.end(), 0);
        if (row_fill > 0) {
            int needed_buckets = (row_fill + capacity - 1) / capacity;
            buckets_needed += needed_buckets;
        }
    }
    
    return buckets_needed;
}