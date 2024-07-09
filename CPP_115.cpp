int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int amount : well) {
            if (amount == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = (total_water + capacity - 1) / capacity;

    return buckets_needed;
}