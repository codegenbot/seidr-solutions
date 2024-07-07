Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += count(row.begin(), row.end(), 1);
    }
    
    int num_buckets_needed = (total_water + capacity - 1) / capacity;
    
    return num_buckets_needed;
}