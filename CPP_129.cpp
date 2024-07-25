vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.empty()) {
                res.push_back(grid[i][j]);
            } else {
                bool found = false;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int ni = i + x, nj = j + y;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                            if (res.back() == grid[ni][nj]) {
                                res.push_back(grid[ni][nj]);
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
    while (res.size() < k) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                bool found = false;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int ni = i + x, nj = j + y;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                            if (res.back() == grid[ni][nj]) {
                                res.push_back(grid[ni][nj]);
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
    return res;
}