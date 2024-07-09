Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto &row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int max_times = -1;
    int current_water = 0;
    for (int i = 0; i < total_water; i += capacity) {
        current_water = min(current_water + capacity, total_water - i);
        max_times = max(max_times, (i + current_water + capacity - 1) / capacity);
    }
    
    return max_times;
}