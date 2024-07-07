int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, total_water = 0, remaining_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    while (total_water > 0) {
        remaining_water = min(total_water, capacity);
        total_water -= remaining_water;
        res++;
        
        int water_removed = 0;
        for (const auto& row : grid) {
            for (auto& cell : row) {
                if (cell > 0) {
                    --cell;
                    water_removed += (capacity - remaining_water) > 1 ? 1 : cell;
                }
            }
        }
        
        total_water -= water_removed;
    }
    
    return res;
}