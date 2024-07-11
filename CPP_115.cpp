int count = 0;
        for (const auto& row : grid) {
            int water_in_row = 0;
            for (int cell : row) {
                water_in_row += cell;
            }
            while (water_in_row > 0) {
                water_in_row -= capacity;
                count++;
            }
        }
        return count;
    }