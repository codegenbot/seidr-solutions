int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            wells[i] += grid[i][j];
        }
    }

    int total_water = 0;
    for (int well : wells) {
        total_water += well;
    }

    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0) {
        buckets_needed++;
    }

    return buckets_needed;
}