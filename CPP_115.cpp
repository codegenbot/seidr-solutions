Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int res = 0;
    for (auto& row : grid) {
        int remaining_water = 0;
        for (auto water : row) {
            if (water == 1) {
                remaining_water += water;
            }
        }
        while (remaining_water > 0) {
            remaining_water -= capacity;
            res++;
            if (remaining_water >= 0) break;
        }
    }
    return res;
}