int rows = grid.size();
        int cols = grid[0].size();
        int result = 0;
        for (int j = 0; j < cols; j++) {
            int curr_capacity = 0;
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == 1) {
                    int diff = capacity - curr_capacity;
                    if (diff > 0) {
                        curr_capacity += diff;
                        result += i;
                    }
                }
            }
        }
        return result;
    }