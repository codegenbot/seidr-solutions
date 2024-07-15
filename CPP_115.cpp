#include <vector>
#include <algorithm>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max_fill(vector<vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    int num_operations = 0;

    for (int j = 0; j < cols; ++j) {
        int max_water = 0;
        for (int i = 0; i < rows; ++i) {
            max_water = max(max_water, grid[i][j]);
        }
        total_water += max_water;
    }

    while (total_water > 0) {
        total_water -= min(total_water, capacity);
        num_operations++;
    }

    return num_operations;
}