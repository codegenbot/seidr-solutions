int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int steps = 0;
    while (total_water > 0) {
        for (int i = 0; i < grid.size(); ++i) {
            int water_in_well = 0;
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1) {
                    water_in_well += capacity;
                    total_water -= capacity;
                    if (total_water <= 0) break;
                }
            }
        }
        steps++;
    }
    
    return steps;
}