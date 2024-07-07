int max_fill(vector<vector<int>> grid, int capacity) {
    int max_times = 0;
    for (int i = 0; i < grid.size(); i++) {
        int water_in_well = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }
        while (water_in_well > 0) {
            int max_water_to_take = min(water_in_well, capacity);
            water_in_well -= max_water_to_take;
            max_times++;
        }
    }
    return max_times;
}