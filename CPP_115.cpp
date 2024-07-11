int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    
    int buckets_needed = (total_water + capacity - 1) / capacity;
    return buckets_needed;
}