#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] > capacity) {
                int diff = grid[i][j] - capacity;
                count += diff;
                grid[i][j] = capacity;
            }
        }
    }
    return count;
}