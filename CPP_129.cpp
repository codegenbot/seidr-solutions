vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (res.empty()) {
                res.push_back(grid[i][j]);
            } else {
                bool found = false;
                for (int x = -1; x <= 1; ++x) {
                    for (int y = -1; y <= 1; ++y) {
                        int nx = i + x, ny = j + y;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            if (res.back() == grid[nx][ny]) {
                                res.push_back(grid[nx][ny]);
                                found = true;
                                break;
                            }
                        }
                    }
                    if (found) break;
                }
            }
        }
    }
    while (k > 0 && res.size() > k) res.pop_back();
    return res;
}