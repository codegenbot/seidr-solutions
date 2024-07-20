int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    int total_water = 0;
    for (auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    while (total_water > 0) {
        bool moved = false;
        for (int i = 0; i < grid.size(); ++i) {
            int water_in_bucket = min(capacity, (int)accumulate(grid[i].begin(), grid[i].end(), 0));
            if (water_in_bucket > 0) {
                total_water -= water_in_bucket;
                moved = true;
                for (auto& cell : grid[i]) {
                    cell -= water_in_bucket;
                }
            }
        }
        res += moved ? 1 : 0;
    }
    return res;
}