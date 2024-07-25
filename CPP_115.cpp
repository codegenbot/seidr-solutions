int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n);
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water++;
                bucket[i]++;
            }
        }
    }

    int steps = 0;
    while (total_water > 0) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            if (bucket[i] <= capacity) {
                int water_to_add = min(capacity - bucket[i], total_water);
                bucket[i] += water_to_add;
                total_water -= water_to_add;
                changed = true;
            }
        }

        if (!changed) {
            break;
        }

        steps++;
    }

    return steps;
}