int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }

    int bucket_cycles = total_water / capacity;
    if (total_water % capacity > 0)
        ++bucket_cycles;

    return bucket_cycles;
}