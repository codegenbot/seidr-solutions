int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int water : well) {
            if (water == 1) {
                total_water++;
            }
        }
    }

    int max_bucket_fill = total_water / capacity;
    return max_bucket_fill + ((total_water % capacity) ? 1 : 0);
}