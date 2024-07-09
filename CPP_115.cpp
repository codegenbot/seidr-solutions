#include <vector>
#include <algorithm>

int max_fill(vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    int num_operations = 0;
    while (total_water > 0) {
        total_water -= min(total_water, capacity * rows);
        num_operations++;
    }
    return num_operations;
}