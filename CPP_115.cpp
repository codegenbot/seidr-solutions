int max_fill(vector<vector<int>> grid, int capacity) {
    int lower_count = 0;
    int total_water = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            total_water += grid[i][j];
            if (total_water >= capacity) {
                lower_count += total_water / capacity;
                total_water %= capacity;
            }
        }
    }

    if (total_water > 0) {
        lower_count += 1;
    }

    return lower_count;
}