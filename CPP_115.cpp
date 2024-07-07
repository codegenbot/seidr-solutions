int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    int max_fill_count = -1;
    for (int i = 0; i <= total_water / capacity; ++i) {
        int water_left = total_water;
        int fill_count = 0;
        for (int j = 0; j < n; ++j) {
            int water_in_bucket = min(capacity, water_left);
            int remaining_water = water_left - water_in_bucket;
            int bucket_fill_count = accumulate(grid[j].begin(), grid[j].end(), 0, [&](int acc, int val) {
                return acc + (val > 0 ? 1 : 0);
            });
            fill_count += bucket_fill_count;
            water_left = remaining_water - capacity * bucket_fill_count;
        }
        max_fill_count = max(max_fill_count, fill_count);
    }
    return max_fill_count;
}