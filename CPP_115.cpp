int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                total_water += unit;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    while (remaining_water > 0) {
        buckets_needed++;
        remaining_water -= capacity;
    }

    return buckets_needed;
}