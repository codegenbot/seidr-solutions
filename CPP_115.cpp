int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int total_water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
        while (total_water > 0) {
            int water_to_take = min(total_water, capacity);
            total_water -= water_to_take;
            ans++;
            capacity = max(0, capacity - water_to_take);
        }
    }
    return ans;
}