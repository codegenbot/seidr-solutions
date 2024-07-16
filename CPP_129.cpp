vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        int row = i % n;
        int col = i / n;
        if (col % 2 == 0) {
            path.push_back(grid[row][i % n]);
        } else {
            path.push_back(grid[n - 1 - row][i % n]);
        }
    }
    return path;
}