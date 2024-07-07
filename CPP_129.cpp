vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxVal = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[0].size(); col++) {
                if (grid[j][col] > maxVal && res.empty() || find(res.begin(), res.end(), grid[j][col]) == res.end()) {
                    maxVal = grid[j][col];
                    int row = j, col2 = col;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == maxVal) {
                    grid[i][j] = -1;
                }
            }
        }
    }
    return res;
}