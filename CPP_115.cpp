Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int cur_water = 0;
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1) {
                cur_water += 1;
            }
        }
        while (cur_water > 0) {
            int amount_to_take = min(cur_water, capacity);
            cur_water -= amount_to_take;
            ans++;
        }
    }
    return ans;
}