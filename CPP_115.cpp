#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    return static_cast<int>(ceil((double)total_water / capacity));
}