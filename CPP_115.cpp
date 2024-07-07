int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int fill = 0;
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                fill++;
            }
        }
        while (fill > 0) {
            int bucket_fill = min(fill, capacity);
            res += bucket_fill;
            fill -= bucket_fill;
        }
    }
    return res;
}