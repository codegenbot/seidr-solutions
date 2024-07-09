```
int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += count(row.begin(), row.end(), 1);
    }
    return total_water / capacity + (total_water % capacity > 0);