int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                int buckets_needed = grid[i][j] / capacity;
                if (grid[i][j] % capacity != 0) {
                    buckets_needed++;
                }
                count += buckets_needed;
            }
        }
    }
    return count;
}