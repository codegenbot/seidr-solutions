int max_fill(vector<vector<int>> grid, int capacity) {
            int count = 0;
            for (int j = 0; j < grid[0].size(); ++j) {
                int wells = 0;
                for (int i = 0; i < grid.size(); ++i) {
                    wells += grid[i][j];
                }
                if (wells > capacity) {
                    count += wells - capacity;
                }
            }
            return count;
        }