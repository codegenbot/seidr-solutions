int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> water(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                water[i] += 1;
            }
        }
    }

    int total_water = 0;
    int times = 0;
    for (int i = 0; i < n; ++i) {
        total_water += water[i];
    }

    while (total_water > 0) {
        int temp = min(total_water, capacity);
        total_water -= temp;
        times++;
    }

    return times;
}