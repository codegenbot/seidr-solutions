int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    vector<int> water(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water[i]++;
            }
        }
    }
    while (true) {
        int filled = 0;
        for (int i = 0; i < n; i++) {
            if (water[i] > 0) {
                int toFill = min(capacity, water[i]);
                water[i] -= toFill;
                filled += toFill;
            }
        }
        if (filled == 0) break;
        res++;
    }
    return res;
}