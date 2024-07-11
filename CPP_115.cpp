int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int water : well) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    return total_water / capacity + (total_water % capacity != 0);
}