int max_fill(const vector<vector<int>>& grid, int capacity) {
    int total_water = 0;
    int total_buckets = 0;

    for (const auto &row : grid) {
        for (int val : row) {
            total_water += val;
        }
    }

    total_buckets = (total_water + capacity - 1) / capacity;

    return total_buckets;
}