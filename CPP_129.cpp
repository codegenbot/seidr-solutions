int n = grid.size();
    vector<int> result;
    
    int start_row = 0, start_col = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                start_row = i;
                start_col = j;
                break;
            }
        }
    }
    
    result.push_back(1);
    int current_row = start_row, current_col = start_col;
    for (int step = 1; step < k; ++step) {
        if (current_col + 1 < n && grid[current_row][current_col + 1] == step + 1) {
            current_col++;
        } else if (current_row + 1 < n && grid[current_row + 1][current_col] == step + 1) {
            current_row++;
        } else if (current_col - 1 >= 0 && grid[current_row][current_col - 1] == step + 1) {
            current_col--;
        } else if (current_row - 1 >= 0 && grid[current_row - 1][current_col] == step + 1) {
            current_row--;
        }
        result.push_back(grid[current_row][current_col]);
    }
    
    return result;
}