vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int start = 1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int l = 0; l < grid[j].size(); ++l) {
                if (grid[j][l] == start) {
                    res.push_back(start);
                    grid[j][l] = -1;
                    start++;
                    break;
                }
            }
        }
    }
    return res;
}