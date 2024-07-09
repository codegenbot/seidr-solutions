```cpp
#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto &row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += 1; // assuming it's binary (0 or 1)
            }
        }
    }

    int steps = -(-total_water / capacity);
    return steps;
}

int main() {
    std::vector<std::vector<int>> grid = {{0, 0, 1}, {1, 1, 0}, {1, 1, 0}};
    int capacity = 3;

    int result = max_fill(grid, capacity);

    std::cout << "The minimum number of operations to fill the container is: " << result << std::endl;

    return 0;
}