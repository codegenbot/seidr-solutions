vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        int row = i % grid.size();
        int col = i % grid[row].size();
        path.push_back(grid[row][col]);
    }
    return path;
}