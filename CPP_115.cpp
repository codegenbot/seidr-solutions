int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int> well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += min(capacity, unit);
            }
        }
        while (water > 0) {
            water -= capacity;
            res++;
        }
    }
    return res;
}