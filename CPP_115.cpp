int max_fill(vector<vector<int>> grid, int capacity) {
    int water = 0;
    for (const auto &well : grid) {
        for (int amount : well) {
            if (amount == 1) {
                water += amount;
            }
        }
    }

    return (water + capacity - 1) / capacity;
}