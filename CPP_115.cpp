int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    int num_operations = 0;

    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            total_water += grid[i][j];
        }
    }

    while (total_water > 0) {
        total_water -= capacity * grid.size();
        num_operations++;
    }

    return num_operations;
}