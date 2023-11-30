vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    int i = 0, j = 0;
    while (k > 0) {
        path.push_back(grid[i][j]);
        if (i % 2 == 0) {
            if (j < m - 1) {
                j++;
            } else {
                i++;
            }
        } else {
            if (j > 0) {
                j--;
            } else {
                i++;
            }
        }
        k--;
    }
    return path;
}