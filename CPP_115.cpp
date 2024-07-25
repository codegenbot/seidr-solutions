Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            int amount_to_take = min(water, capacity);
            water -= amount_to_take;
            ans++;
        }
    }
    return ans;
}