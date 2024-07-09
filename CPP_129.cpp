vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] <= n * n && find(grid[i][j], res, k) == true) {
                res.push_back(grid[i][j]);
                return res;
            }
        }
    }
    return {};
}

bool find(int val, vector<int>& res, int k) {
    for (int i = 0; i < res.size(); ++i) {
        if (res[i] == val) {
            if (k > i) {
                return true;
            } else {
                return false;
            }
        }
    }
    return true;
}