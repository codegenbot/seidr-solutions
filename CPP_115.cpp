int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    
    for (int i = 0; i < n; ++i) {
        int fill = 0;
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                fill += min(capacity, grid[i].size() - j);
            }
        }
        ans += fill / capacity + (fill % capacity != 0);
    }
    
    return ans;
}