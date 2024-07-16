int count = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            int curr_capacity = 0;
            for (int i = 0; i < grid.size(); i++) {
                if (grid[i][j] == 1) {
                    curr_capacity++;
                }
            }
            while (curr_capacity > capacity) {
                curr_capacity -= capacity;
                count++;
            }
            if (curr_capacity > 0) {
                count++;
            }
        }
        return count;
}