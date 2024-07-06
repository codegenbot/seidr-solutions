int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> res(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                res[i] += 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (res[i] > 0 && res[i] >= capacity) {
            res[i] -= capacity;
            ans++;
        }
    }
    return ans;
}