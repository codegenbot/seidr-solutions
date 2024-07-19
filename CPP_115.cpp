int max_fill(vector<vector<int>>& grid, int capacity) {
    int total_water = accumulate(grid.begin(), grid.end(), 0, [](int sum, const vector<int>& row) {
        return sum + accumulate(row.begin(), row.end(), 0);
    });

    int buckets_needed = total_water / capacity + (total_water % capacity != 0);

    return buckets_needed;
}