Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int steps = 0;
    while (total_water > 0) {
        steps++;
        int filled = capacity;
        for (const auto& row : grid) {
            for (int i = 0; i < row.size(); i++) {
                if (row[i] == 1) {
                    row[i] = 0;
                    total_water--;
                    if (--filled == 0)
                        break;
                }
            }
        }
    }

    return steps;
}