int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (vector<int>& row : grid) {
        int water = 0;
        for (int col = 0; col < row.size(); col++) {
            if (row[col] == 1) {
                water += row[col];
            }
        }
        while (water > 0) {
            int amount = min(water, capacity);
            water -= amount;
            res++;
            if (water > 0) {
                res++;
            }
        }
    }
    return res;
}