Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    int bucket_cycles = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    int cycles_to_empty_buckets = 0;
    while (remaining_water > 0) {
        for (int i = 0; i < n; ++i) {
            if (grid[i].size() > 0 && grid[i][0] == 1) {
                --grid[i][0];
                --remaining_water;
                if (remaining_water == 0)
                    break;
            }
        }
        ++cycles_to_empty_buckets;
    }
    
    return bucket_cycles + cycles_to_empty_buckets;
}