#include <vector>
#include <algorithm>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    
    for (std::vector<int> well : grid) {
        total_water += std::accumulate(well.begin(), well.end(), 0);
    }
    
    return (total_water + capacity - 1) / capacity;
}