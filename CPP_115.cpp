int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, water = 0;
    for (const auto& row : grid) {
        for (int col = 0; col < row.size(); ++col) {
            if (row[col] == 1) water += row[col];
        }
        while (water >= capacity) {
            water -= capacity;
            res++;
        }
    }
    return res;
}