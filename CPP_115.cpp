#include <iostream>
#include <vector>

int calculate_buckets_needed(const std::vector<std::vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
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

int main() {
    int rows, cols, capacity;
    std::vector<std::vector<int>> grid;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    std::cout << "Enter the capacity: ";
    std::cin >> capacity;

    grid.resize(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter value at position (" << i << ", " << j << "): ";
            std::cin >> grid[i][j];
        }
    }

    int buckets_needed = calculate_buckets_needed(grid, capacity);
    std::cout << "Buckets needed: " << buckets_needed << std::endl;

    return 0;
}