int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int wells_per_row = grid[0].size();

    int buckets_needed = 0;
    for (int i = 0; i < rows; i++) {
        int water_in_well = 0;
        for (int j = 0; j < wells_per_row; j++) {
            if (grid[i][j] == 1) {
                water_in_well += 1;
            }
        }

        while (water_in_well > capacity) {
            water_in_well -= capacity;
            buckets_needed++;
        }
    }

    return buckets_needed;
}