Here is the completed code:

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int maxVal = 1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int l = 0; l < grid[0].size(); ++l) {
                if (grid[j][l] > maxVal && res.size() + i <= k) {
                    res.push_back(grid[j][l]);
                    maxVal = grid[j][l];
                    break;
                }
            }
        }
    }
    return res;
}