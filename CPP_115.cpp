int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int col = 0; col < row.size(); ++col) {
            if (row[col] == 1) {
                total_water += row[col];
            }
        }
    }

    return total_water / capacity + (total_water % capacity != 0);
}