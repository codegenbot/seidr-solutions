#include <vector>
#include <algorithm>

double max_fill(vector<vector<int>> grid, int capacity) {
    double total_water = 0;
    for (int i = 0; i < grid.size(); i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return ceil(total_water / capacity);
}