vector<int> minPath(vector<vector<int>> grid, int k) {
        vector<int> path;
        int n = grid.size();

        int start_row = 0, start_col = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    start_row = i;
                    start_col = j;
                }
            }
        }

        int cur_row = start_row, cur_col = start_col;
        path.push_back(grid[cur_row][cur_col]);
        k--;

        while (k > 0) {
            int next_row = cur_row, next_col = cur_col;

            if (cur_row > 0 && grid[cur_row - 1][cur_col] == grid[cur_row][cur_col] + 1) {
                next_row = cur_row - 1;
            } else if (cur_col > 0 && grid[cur_row][cur_col - 1] == grid[cur_row][cur_col] + 1) {
                next_col = cur_col - 1;
            } else if (cur_row < n - 1 && grid[cur_row + 1][cur_col] == grid[cur_row][cur_col] + 1) {
                next_row = cur_row + 1;
            } else if (cur_col < n - 1 && grid[cur_row][cur_col + 1] == grid[cur_row][cur_col] + 1) {
                next_col = cur_col + 1;
            }

            cur_row = next_row;
            cur_col = next_col;
            path.push_back(grid[cur_row][cur_col]);
            k--;
        }

        return path;
    }