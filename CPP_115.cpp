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

    int steps = 0;
    while (total_water > 0) {
        int water_taken = min(total_water, capacity);
        total_water -= water_taken;
        steps++;
        total_water = rows * capacity - total_water;
    }
    return steps;
}