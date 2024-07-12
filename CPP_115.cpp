int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> total_water(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total_water[i]++;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        while (total_water[i] > capacity && capacity != 0) {
            total_water[i] -= capacity;
            ans++;
        }
    }
    return ans;
}