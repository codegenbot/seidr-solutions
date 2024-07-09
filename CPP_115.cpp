int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            wells[i] += grid[i][j];
        }
    }

    int times = 0;
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            if (wells[i] > capacity) {
                wells[i] -= capacity;
                changed = true;
                times++;
            }
        }
        if (!changed) break;
    }

    return times;
}