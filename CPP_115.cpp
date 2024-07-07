int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int i = 0; i < row.size(); ++i) {
            if (row[i] == 1) {
                total_water += 1;
            }
        }
    }
    
    int max_steps = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    while (remaining_water > 0) {
        --max_steps;
        remaining_water -= capacity;
    }
    
    return max_steps + total_water / capacity;
}