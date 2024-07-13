int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    if (remaining_water > 0) {
        buckets_needed++;
    }

    return buckets_needed;
}