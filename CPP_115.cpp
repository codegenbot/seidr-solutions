int max_fill(vector<vector<int>> grid, int capacity) {
    int buckets = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] > 0) {
                int extra_water = grid[i][j] - capacity;
                if (extra_water > 0) {
                    grid[i][j] = capacity;
                    buckets += extra_water;
                } else {
                    grid[i][j] = 0;
                }
            }
        }
    }
    return buckets;
}