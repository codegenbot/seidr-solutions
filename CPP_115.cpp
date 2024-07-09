int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            int bucket = min(water, capacity);
            res++;
            water -= bucket;
            capacity -= bucket;
            if (capacity < 0) {
                capacity = 0;
            }
        }
    }
    return res;
}