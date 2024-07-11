int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int water = 0;
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            if (water >= capacity) {
                water -= capacity;
                ans++;
            } else {
                ans++;
                break;
            }
        }
    }
    return ans;
}