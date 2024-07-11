vector<int> minPath(vector<vector<int>> grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    vector<int> result;

    for (int i = 0; i < k / m; ++i) {
        for (int j = 0; j < n; ++j) {
            result.push_back(grid[i % m][j]);
        }
    }

    return result;
}