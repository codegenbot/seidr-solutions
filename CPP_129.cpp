vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!res.empty() && res.back() > grid[i][j]) continue;
            vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for (pair<int, int> d : dir) {
                int ni = i + d.first, nj = j + d.second;
                if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                    res.push_back(grid[ni][nj]);
                    if (res.size() == k) return res;
                    res.pop_back();
                }
            }
        }
    }
    return {};
}