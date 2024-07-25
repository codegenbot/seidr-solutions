int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
        int water_in_well = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }
        while (water_in_well > 0) {
            int bucket_left = min(water_in_well, capacity);
            water_in_well -= bucket_left;
            ans++;
            capacity = max(0, capacity - bucket_left);
        }
    }
    return ans;
}