int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    int bucket_needed = total_water / capacity;
    if (total_water % capacity != 0) bucket_needed++;
    return bucket_needed;
}