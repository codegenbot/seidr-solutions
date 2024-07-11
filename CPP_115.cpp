int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            int bucket = min(water, capacity);
            res++;
            water -= bucket;
            if (water > 0) {
                res++;
            }
        }
    }
    return res;
}