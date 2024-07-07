int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (int i = 0; i < grid.size(); i++) {
        int curr_row = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            curr_row += grid[i][j];
        }
        while (curr_row > 0) {
            curr_row -= capacity;
            res++;
        }
    }
    return res;
}