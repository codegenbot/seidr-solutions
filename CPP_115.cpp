Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water += 1;
            }
        }
    }

    int max_fill_times = 0;
    while (total_water > 0) {
        int water_per_bucket = min(capacity, total_water);
        total_water -= water_per_bucket;
        max_fill_times++;
    }

    return max_fill_times;
}