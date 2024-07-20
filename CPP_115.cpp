int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int curr_bucket = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                if (curr_bucket < capacity) {
                    curr_bucket++;
                } else {
                    res += capacity;
                    curr_bucket = 1;
                }
            }
        }
    }
    return res;
}