int n = grid.size();
    vector<int> path;
    path.push_back(grid[0][0]);
    for (int i = 1; i < k; ++i) {
        int x = (i-1) / n;
        int y = (i-1) % n;
        if (x % 2 == 0) {
            if (y < n-1) {
                path.push_back(grid[x][y+1]);
            } else {
                path.push_back(grid[x+1][y]);
            }
        } else {
            if (y > 0) {
                path.push_back(grid[x][y-1]);
            } else {
                path.push_back(grid[x+1][y]);
            }
        }
    }
    return path;
}