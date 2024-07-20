int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, water = 0;
    for (const auto& row : grid) {
        for (int w : row) {
            if (w == 1) {
                water += w;
            }
        }
    }
    while (water > 0) {
        res++;
        int toTake = min(water, capacity);
        water -= toTake;
    }
    return res;
}