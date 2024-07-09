int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > capacity) {
            water -= capacity;
            ans++;
        }
    }
    return ans;
}