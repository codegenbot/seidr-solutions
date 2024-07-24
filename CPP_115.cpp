int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    int total_water = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
    }

    int max_times = -1;
    int current_water = 0;

    while (total_water > 0) {
        for (int i = 0; i < n; i++) {
            if (buckets[i] + grid[i].size() - 1 >= capacity) {
                buckets[i] += capacity;
                current_water -= capacity;
            } else {
                buckets[i] = grid[i].size();
                current_water -= grid[i].size();
            }
        }

        int times = 0;

        for (int i = 0; i < n; i++) {
            if (buckets[i] > 0) {
                times++;
                buckets[i] -= capacity;
                current_water += capacity;
            }
        }

        max_times = max(max_times, times);
    }

    return max_times;
}