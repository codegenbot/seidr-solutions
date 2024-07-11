int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> total(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total[i]++;
            }
        }
    }

    int ans = 0;
    while (true) {
        bool changed = false;
        vector<int> new_total(total);
        for (int i = 0; i < n; i++) {
            if (new_total[i] >= capacity) {
                new_total[i] -= capacity;
                ans++;
            } else {
                new_total[i] = 0;
            }
        }

        bool all_empty = true;
        for (int i = 0; i < n; i++) {
            if (new_total[i] > 0) {
                all_empty = false;
                break;
            }
        }

        if (all_empty) {
            return ans;
        }

        total = new_total;
    }
}