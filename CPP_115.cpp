int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (int i = 0; i < grid.size(); i++) {
        int fill = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                fill += 1;
            }
        }
        while (fill > capacity) {
            ans++;
            fill -= capacity;
        }
    }
    return ans;
}