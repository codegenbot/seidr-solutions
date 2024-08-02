#include <iostream>
#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>>& grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int times = total_water / capacity;
    if (total_water % capacity > 0)
        times++;
    
    return times;
}

int main() {
    std::vector<std::vector<int>> grid = {{1,2}, {3,4}};
    int capacity = 5;
    std::cout << max_fill(grid, capacity) << std::endl;
    return 0;
}