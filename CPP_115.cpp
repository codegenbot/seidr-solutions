Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    int total_water = 0;

    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }

    while (total_water > 0) {
        int water_collected = 0;
        bool can_collect = false;

        for (int i = 0; i < grid.size(); i++) {
            int water_in_well = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    water_in_well++;
                }
            }

            if (water_in_well > capacity) {
                water_collected += capacity;
                count++;
            } else {
                water_collected += water_in_well;
                can_collect = true;
            }

            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = 0;
                }
            }
        }

        total_water -= water_collected;

        if (!can_collect) break;
    }

    return count;
}