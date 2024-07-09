#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto &row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += water;
            }
        }
    }

    int steps = -(-total_water / capacity);
    return steps;
}

int main() {
    std::vector<std::vector<int>> grid = {{0, 0, 0}, {0, 1, 0}, {0, 1, 1}};
    int capacity = 2;
    
    int result = max_fill(grid, capacity);
    std::cout << "Maximum steps to fill the container: " << result << std::endl;
    
    return 0;
}