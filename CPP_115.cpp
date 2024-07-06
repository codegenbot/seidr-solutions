int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (const auto &well : grid) {
        int water = 0;
        for (const auto w : well) {
            water += w;
        }
        while (water > 0) {
            if (capacity <= water) {
                water -= capacity;
                ans++;
            } else {
                ans++;
                water--;
            }
        }
    }
    return ans;
}