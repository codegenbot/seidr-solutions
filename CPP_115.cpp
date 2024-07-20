int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    for (int i = 0; i < n; i++) {
        int remaining = capacity;
        bool filled = false;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j]) {
                while (remaining > 0 && j < grid[i].size()) {
                    remaining--;
                    j++;
                }
                if (remaining == capacity) {
                    filled = true;
                    break;
                } else if (remaining > 0) {
                    res += remaining;
                    remaining = 0;
                    break;
                }
            }
        }
        if (!filled) {
            res += capacity;
        }
    }
    return res;
}