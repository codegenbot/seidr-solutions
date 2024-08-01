int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                curr += 1;
            }
        }
        while (curr > 0) {
            int fill = min(curr, capacity);
            ans++;
            curr -= fill;
        }
    }
    return ans;
}