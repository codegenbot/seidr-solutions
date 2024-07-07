vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int max_val = 1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] > max_val && res.empty() || res.back() != grid[j][col]) {
                    max_val = grid[j][col];
                    res.push_back(max_val);
                }
            }
        }
    }
    return res;
}