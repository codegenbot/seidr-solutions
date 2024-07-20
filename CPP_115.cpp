int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int bucket_trips = 0;
    while (total_water > 0) {
        int water_in_bucket = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == 1 && water_in_bucket < capacity) {
                    water_in_bucket++;
                }
            }
        }
        
        total_water -= water_in_bucket;
        bucket_trips++;
    }
    
    return bucket_trips;
}