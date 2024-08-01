vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.empty() || res.back() != grid[i][j]) {
                res.push_back(grid[i][j]);
                k--;
                if (k == 0) return res;
            }
        }
    }
    return res;
}