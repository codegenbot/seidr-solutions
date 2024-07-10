int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
        int total_water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        while (total_water > capacity) {
            total_water -= capacity;
            ans++;
        }
    }
    return ans;
}