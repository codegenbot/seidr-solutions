int count = 0;
        int total_water = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                total_water += grid[i][j];
            }
        }

        while (total_water > 0) {
            count += total_water / capacity;
            total_water = total_water % capacity;

            if (total_water > 0) {
                count++;
                total_water -= capacity;
            }
        }

        return count;
    }