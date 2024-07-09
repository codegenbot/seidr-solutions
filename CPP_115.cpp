int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    for (vector<int> well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += unit;
            }
        }
        while (water > 0) {
            int taken = min(water, capacity);
            ans++;
            water -= taken;
        }
    }
    return ans;
}