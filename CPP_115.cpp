int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water++;
            }
        }
        while (water > 0) {
            int to_fill = min(water, capacity);
            water -= to_fill;
            res += to_fill;
            capacity = max(0, capacity - to_fill);
        }
    }
    return res;
}