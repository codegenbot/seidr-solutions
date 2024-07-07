int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> total(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1)
                total[i]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        while (total[i] > 0) {
            total[i] -= capacity;
            ans++;
            if (total[i] >= 0)
                break;
        }
    }

    return ans;
}