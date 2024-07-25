int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, water = 0;
    for (const auto &row : grid) {
        for (auto w : row) {
            water += w;
        }
        while (water > 0 && capacity > 0) {
            if (water <= capacity) {
                res++;
                water = 0;
                break;
            }
            water -= capacity;
            res++;
            capacity = 0;
        }
    }
    return res;
}