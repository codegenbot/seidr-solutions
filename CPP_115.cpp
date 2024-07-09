int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }

    int cycles = total_water / capacity;
    int remaining_water = total_water % capacity;

    return cycles + max(remaining_water, static_cast<int>(capacity));
}