int max_fill(vector<vector<int>>& grid, int capacity) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total_fill = 0;

        for (int j = 0; j < cols; ++j) {
            int well_fill = 0;
            for (int i = 0; i < rows; ++i) {
                well_fill += grid[i][j];
            }
            total_fill += well_fill;
        }

        int num_operations = 0;
        while (total_fill > 0) {
            total_fill -= min(total_fill, capacity * rows);
            num_operations++;
        }

        return num_operations;
    }

    int main() {
        assert (max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
        return 0;
    }