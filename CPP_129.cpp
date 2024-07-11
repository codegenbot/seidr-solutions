vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.empty() || grid[i][j] != res.back()) {
                res.push_back(grid[i][j]);
                k--;
                while (k > 0) {
                    vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                    random_shuffle(dir.begin(), dir.end());
                    for (auto &d : dir) {
                        int x = i + d.first;
                        int y = j + d.second;
                        if (x >= 0 && x < n && y >= 0 && y < n) {
                            if (res.size() <= k || grid[x][y] != res.back()) {
                                i = x, j = y;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return res;
}