#include <vector>
int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); j++) {
        int total_water = 0;
        for (int i = 0; i < grid.size(); i++) {
            total_water += grid[i][j];
        }
        while (total_water > 0) {
            total_water -= capacity;
            count++;
        }
    }
    return count;
}