int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (const auto& row : grid) {
        int total_water = 0;
        for (const auto& col : row) {
            if (col == 1) {
                total_water++;
            }
        }
        while (total_water > 0) {
            int water_taken = min(total_water, capacity);
            total_water -= water_taken;
            res++;
            if (total_water > 0) {
                res++;
            }
        }
    }
    return res;
}