int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0, total_water = 0;
    for (const auto &row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    while (total_water > 0) {
        int water_taken = min(total_water, capacity);
        total_water -= water_taken;
        res++;
        
        for (auto &row : grid) {
            for (auto &cell : row) {
                if (cell > 0 && cell >= water_taken) {
                    cell -= water_taken;
                    break;
                } else if (cell > 0) {
                    cell--;
                    water_taken--;
                }
            }
        }
    }
    
    return res;
}