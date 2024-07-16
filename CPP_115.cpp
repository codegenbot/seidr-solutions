int max_fill(vector<vector<int>> grid, int capacity) {
    int total_fill = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            total_fill += grid[i][j];
        }
    }
    int buckets_needed = total_fill / capacity;
    if (total_fill % capacity != 0) {
        buckets_needed++;
    }
    return buckets_needed;
}