int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (const auto& row : grid) {
        int fill = 0;
        for (auto cell : row) {
            if (cell == 1) {
                fill++;
            }
        }
        while (fill > 0) {
            fill -= capacity;
            res++;
        }
    }
    return res;
}