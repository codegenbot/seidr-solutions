vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (res.empty()) {
                res.push_back(grid[i][j]);
                for (int l = 1; l <= k; l++) {
                    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                    random_shuffle(directions.begin(), directions.end());
                    bool found = false;
                    for (auto dir : directions) {
                        int ni = i + dir.first;
                        int nj = j + dir.second;
                        if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size()) {
                            res.push_back(grid[ni][nj]);
                            found = true;
                            break;
                        }
                    }
                    if (!found) break;
                }
            } else {
                int lastVal = res.back();
                for (int l = 1; l <= k; l++) {
                    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                    random_shuffle(directions.begin(), directions.end());
                    bool found = false;
                    for (auto dir : directions) {
                        int ni = i + dir.first;
                        int nj = j + dir.second;
                        if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size()) {
                            res.push_back(grid[ni][nj]);
                            found = true;
                            break;
                        }
                    }
                    if (!found) break;
                }
            }
        }
    }
    return res;
}