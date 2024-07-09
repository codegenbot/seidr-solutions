int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int> well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += min(unit, capacity);
                capacity -= min(unit, capacity);
            }
        }
        while (capacity > 0) {
            res++;
            capacity -= min(capacity, well.size());
        }
    }
    return res;
}