#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity);

int main() {
    std::vector<std::vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int capacity = 2;
    
    std::cout << max_fill(grid, capacity) << std::endl;

    return 0;
}

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    for (int j = 0; j < grid[0].size(); j++) {
        int total_water = 0;
        for (int i = 0; i < grid.size(); i++) {
            total_water += grid[i][j];
        }
        while (total_water > 0) {
            total_water -= capacity;
            count++;
        }
    }
    return count;
}