int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid)
        total_water += accumulate(row.begin(), row.end(), 0);
    
    if (total_water % capacity != 0)
        return -1; // impossible to empty wells
    
    int max_buckets = total_water / capacity;
    return max_buckets;
}