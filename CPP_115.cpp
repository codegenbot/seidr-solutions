int max_fill(vector<vector<int>> grid, int capacity) {
    int buckets = 0;
    for (int i = 0; i < grid.size(); ++i) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); ++j) {
            water += grid[i][j];
            if (water >= capacity) {
                buckets += water / capacity;
                water %= capacity;
            }
        }
        buckets += water > 0 ? 1 : 0;
    }
    return buckets;
}