vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] <= k && (res.empty() || res.back() < grid[i][j])) {
                res.push_back(grid[i][j]);
                k--;
                while (!res.empty() && res.size() > k) {
                    res.pop_back();
                }
            }
        }
    }
    return res;
}