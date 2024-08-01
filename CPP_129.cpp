vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int idx = -1;
        int val = INT_MAX;
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] <= val && find(res.begin(), res.end(), grid[j][col]) == res.end()) {
                    idx = j * grid.size() + col;
                    val = grid[j][col];
                }
            }
        }
        res.push_back(val);
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if (grid[i][j] == val) {
                    grid[i][j] = INT_MAX;
                }
            }
        }
    }
    return res;
}