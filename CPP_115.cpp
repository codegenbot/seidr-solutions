int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int total_water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        while (total_water > capacity) {
            res += capacity;
            total_water -= capacity;
        }
    }
    return res;
}