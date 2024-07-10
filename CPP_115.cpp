#include <iostream>
#include <vector>
#include <cassert>

int max_fill(const std::vector<std::vector<int>>& grid, int capacity) {
    int rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> grid(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> grid[i][j];
        }
    }

    int total_water = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0) {
        buckets_needed++;
    }
    return buckets_needed;
}