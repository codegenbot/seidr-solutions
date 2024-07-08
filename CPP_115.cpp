int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return total_water / capacity + (total_water % capacity > 0);
}