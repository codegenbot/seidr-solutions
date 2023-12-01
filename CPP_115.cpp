#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int buckets_needed = (grid[i][j] + capacity - 1) / capacity;
                count += buckets_needed;
            }
        }
    }

    return count;
}

int main() {
    std::vector<std::vector<int>> grid = {{0, 0, 1, 0}, {0, 1, 0, 0}, {1, 1, 1, 1}};
    int bucket_capacity = 1;

    int result = max_fill(grid, bucket_capacity);
    std::cout << "Output: " << result << std::endl;

    return 0;
}