vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res.size() == k) break;
            res.push_back(grid[i][j]);
            int x, y;
            if (i > 0) {x = i - 1; y = j;}
            else if (i < n - 1) {x = i + 1; y = j;}
            else if (j > 0) {x = i; y = j - 1;}
            else if (j < n - 1) {x = i; y = j + 1;}
            while (x >= 0 && x < n && y >= 0 && y < n) {
                res.push_back(grid[x][y]);
                k--;
                if (k == 0) break;
                if (res.size() > 1 && res.back() > grid[x][y]) {
                    x++;
                    while (x < n && res.back() > grid[x][y]) x++;
                } else {
                    y++;
                    while (y < n && res.back() > grid[x][y]) y++;
                }
            }
        }
    }
    return res;
}