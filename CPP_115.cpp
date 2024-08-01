int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    if (capacity == 0) return 0;
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return total_water / capacity;
}