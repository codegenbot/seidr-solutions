Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int amount : row) {
            if (amount == 1) {
                total_water++;
            }
        }
    }

    return total_water / capacity + (total_water % capacity != 0);
}