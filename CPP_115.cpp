int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto row : grid) {
        for (int unit : row) {
            if (unit == 1) {
                total_water += unit;
            }
        }
    }

    return ceil((double)total_water / capacity);
}