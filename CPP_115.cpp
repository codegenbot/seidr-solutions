int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int remain = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                remain += capacity;
                res++;
            } else {
                while (remain >= 1) {
                    remain--;
                    res++;
                }
                remain = 0;
            }
        }
    }
    return res;
}