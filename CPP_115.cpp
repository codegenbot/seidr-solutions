```cpp
#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (auto row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int steps = -(-total_water / capacity); 
    return steps;
}