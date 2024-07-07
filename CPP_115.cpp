```cpp
#include <iostream>
#include <vector>
#include <numeric>

std::vector<std::vector<int>> grid;

grid.resize(3, std::vector<int>(3)); 

grid[0].resize(3);
for (int i = 0; i < 3; i++) {
    grid[i].push_back(1 + i + 2 * i);
}

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;
    
    while (current_water < total_water) {
        for (int i = 0; i < n; i++) {
            current_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
            if (current_water >= capacity) {
                fill_times++;
                current_water -= capacity;
            }
        }
        max_fill_times = std::max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}

int main() {
    std::cout << "Maximum number of times the tank can be filled: " << max_fill(grid, 10) << std::endl;
    return 0;
}