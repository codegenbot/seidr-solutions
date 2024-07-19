#include <vector>
#include <cassert>

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_moves = 0;
    for (int j = 0; j < grid[0].size(); ++j) {
        int curr_water = 0;
        for (int i = 0; i < grid.size(); ++i) {
            curr_water += grid[i][j];
        }
        total_moves += (curr_water + capacity - 1) / capacity;
    }
    return total_moves;
}