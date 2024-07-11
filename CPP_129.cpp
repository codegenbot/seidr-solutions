vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.size() == k) return res;
            res.push_back(grid[i][j]);
            if (i > 0) res.push_back(grid[i-1][j]);
            if (j > 0) res.push_back(grid[i][j-1]);
            if (i < n - 1) res.push_back(grid[i+1][j]);
            if (j < n - 1) res.push_back(grid[i][j+1]);
        }
    }
    return res;
}