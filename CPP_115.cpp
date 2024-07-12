int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                buckets[i]++;
            }
        }
    }

    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += buckets[i];
    }

    int steps = total_water / capacity;
    if (total_water % capacity > 0) {
        steps++;
    }

    return steps;
}