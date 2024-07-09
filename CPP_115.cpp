Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (auto row : grid) {
        int water = 0;
        for (auto cell : row) {
            if (cell == 1) {
                water += cell;
            }
        }
        while (water > 0) {
            water -= capacity;
            ans++;
        }
    }
    return ans;
}