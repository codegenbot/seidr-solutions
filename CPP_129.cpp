vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    int r = 0, c = 0;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[r][c]);
        if ((r + c) % 2 == 0) {
            if (c == n - 1) {
                ++r;
            } else if (r == 0) {
                ++c;
            } else {
                --r;
                ++c;
            }
        } else {
            if (r == n - 1) {
                ++c;
            } else if (c == 0) {
                ++r;
            } else {
                ++r;
                --c;
            }
        }
    }
    return path;
}