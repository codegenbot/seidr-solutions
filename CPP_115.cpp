int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int total_water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            total_water += grid[i][j];
        }
        while (total_water > 0) {
            int water_to_empty = min(total_water, capacity);
            total_water -= water_to_empty;
            res++;
        }
    }
    return res;
}