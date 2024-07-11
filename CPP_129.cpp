vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int x = 0, y = 0;
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[x][y]);
        if ((x + y) % 2 == 0) {
            if (y == n - 1) {
                x++;
            } else if (x == 0) {
                y++;
            } else {
                x--;
                y++;
            }
        } else {
            if (x == n - 1) {
                y++;
            } else if (y == 0) {
                x++;
            } else {
                x++;
                y--;
            }
        }
    }
    return path;
}