int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto &row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    int steps = total_water / capacity;
    return steps + ((total_water % capacity) ? 1 : 0);
}