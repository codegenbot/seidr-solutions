int max_fill(const vector<vector<int>>& grid, int capacity) {
        int total_fill = 0;
        for (size_t i = 0; i < grid.size(); i++) {
            int well_fill = 0;
            for (size_t j = 0; j < grid[i].size(); j++) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }
        return (total_fill + capacity - 1) / capacity;
}