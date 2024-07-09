int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = 0;
    for (const auto& row : grid) {
        int current_bucket = 0;
        for (int cell : row) {
            if (cell > capacity)
                return -1; // This bucket is too large
            if (cell > 0) {
                current_bucket += cell;
                if (current_bucket > capacity) {
                    ++buckets_needed;
                    current_bucket = 0;
                }
            }
        }
        if (current_bucket > 0)
            ++buckets_needed;
    }
    
    return buckets_needed;
}