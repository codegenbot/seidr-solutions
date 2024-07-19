int max_fill(vector<vector<int>>& grid, int capacity) {
    int total_water = 0;
    for (auto row : grid) {
        for (int cell : row) {
            total_water += cell;
        }
    }

    int buckets_needed = total_water / capacity + (total_water % capacity != 0);
    return buckets_needed;
}