vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] <= k) {
                res.push_back(grid[i][j]);
                k--;
                while (k > 0 && (i == 0 || j == 0 || i == n - 1 || j == n - 1)) {
                    if (i > 0) grid[--i][j]++;
                    else if (j < n - 1) grid[i][++j]++;
                    else if (i < n - 1) grid[++i][j]++;
                    else grid[i][--j]++;
                }
            }
        }
    }
    return res;
}