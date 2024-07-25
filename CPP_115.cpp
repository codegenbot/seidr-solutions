int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water_in_well = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }
        while (water_in_well > 0) {
            int water_taken = min(water_in_well, capacity);
            water_in_well -= water_taken;
            ans++;
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                }
            }
        }
    }
    return ans;
}