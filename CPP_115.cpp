Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (auto &row : grid) {
        int water_level = 0;
        for (int col = row.size() - 1; col >= 0; --col) {
            water_level += row[col];
        }
        while (water_level > 0) {
            if (capacity >= water_level) {
                capacity -= water_level;
                water_level = 0;
            } else {
                res += water_level / capacity + (water_level % capacity != 0);
                capacity = 0;
            }
        }
    }
    return res;
}