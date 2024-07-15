int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == 1) {
                    int k = i;
                    while (k < rows && grid[k][j] == 1 && k - i < capacity) {
                        k++;
                    }
                    count += k - i;
                    for (int l = i; l < k; l++) {
                        grid[l][j] = 0;
                    }
                }
            }
        }
        return count;
    }