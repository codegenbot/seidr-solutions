#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            total_water += grid[i][j];
        }
    }
    int num_buckets = total_water / capacity + (total_water % capacity != 0);
    return num_buckets;
}