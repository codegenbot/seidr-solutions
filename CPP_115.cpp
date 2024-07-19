int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> well(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            well[i] += grid[i][j];
        }
    }

    int ans = 0;
    while (true) {
        bool changed = false;
        vector<int> new_well(well);
        for (int i = 0; i < n; i++) {
            if (new_well[i] >= capacity) {
                new_well[i] -= capacity;
                ans++;
                changed = true;
            }
        }
        if (!changed) break;
        well = new_well;
    }

    return ans;
}