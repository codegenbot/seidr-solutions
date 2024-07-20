int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
        int total_water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            total_water += grid[i][j];
        }
        while (total_water > 0) {
            total_water -= capacity;
            ans++;
        }
    }
    return ans;
}