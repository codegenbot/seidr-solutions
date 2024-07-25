int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                total_water++;
            }
        }
    }

    int max_fill = 0;
    while (total_water > 0) {
        int remaining_capacity = capacity;
        for (int i = 0; i < n; i++) {
            if (grid[i].size() > 0 && grid[i][0] == 1) {
                for (; remaining_capacity > 0 && i < n; i--) {
                    if (i >= grid.size() || grid[i].size() == 0 || grid[i][0] != 1) {
                        break;
                    }
                    remaining_capacity--;
                    grid[i].erase(grid[i].begin());
                }
            }
        }
        total_water -= capacity;
        max_fill++;
    }
    return max_fill;
}