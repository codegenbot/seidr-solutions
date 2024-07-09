int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            sum += grid[i][j];
        }
        while (sum > 0) {
            ans++;
            int fill = min(sum, capacity);
            sum -= fill;
        }
    }
    return ans;
}