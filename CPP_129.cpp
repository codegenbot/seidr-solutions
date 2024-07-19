vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            int minVal = INT_MAX;
            vector<int> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for (int d = 0; d < 4; ++d) {
                int ni = i + dir[d][0];
                int nj = j + dir[d][1];
                if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                    minVal = min(minVal, grid[ni][nj]);
                }
            }
            res.push_back(minVal);
            k -= 1;
        }
    }
    return res;
}