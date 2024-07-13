int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water += 1;
            }
        }
    }

    int bucket_fullness = 0;
    int bucket_lowering_count = 0;

    while (total_water > 0) {
        for (int i = 0; i < n; i++) {
            if (grid[i].size() > bucket_fullness && total_water > 0) {
                int water_to_extract = min(capacity, grid[i].size() - bucket_fullness);
                total_water -= water_to_extract;
                bucket_fullness += water_to_extract;
            }
        }
        bucket_lowering_count++;
    }

    return bucket_lowering_count;
}