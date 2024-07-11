int total = 0;
        for (int i = 0; i < grid.size(); i++) {
            int row_sum = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                row_sum += grid[i][j];
            }
            total += row_sum / capacity;
            if (row_sum % capacity != 0) {
                total++;
            }
        }
        return total;
    }