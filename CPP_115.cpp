int result = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int sum = 0;
            for (int i = 0; i < grid.size(); i++) {
                sum += grid[i][j];
            }
            result += (sum / capacity) + ((sum % capacity != 0) ? 1 : 0);
        }
        return result;