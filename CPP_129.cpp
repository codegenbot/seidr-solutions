vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool found = false;
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) continue;
                    int nx = i + x, ny = j + y;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        for (int z = 0; z < k; z++) {
                            res.push_back(grid[nx][ny]);
                        }
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }
    }
    return res;
}