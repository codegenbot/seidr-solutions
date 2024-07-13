int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int moves = 0;
    while (total_water > 0) {
        total_water -= capacity;
        if (total_water < 0) {
            total_water = 0;
        } else {
            ++moves;
        }
    }
    
    return moves;
}