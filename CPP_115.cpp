int total_water = 0;
        int total_moves = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                total_water += grid[i][j];
                if (total_water >= capacity) {
                    total_moves += total_water / capacity;
                    total_water %= capacity;
                }
            }
        }
        if (total_water > 0) {
            total_moves += 1;
        }
        return total_moves;
}