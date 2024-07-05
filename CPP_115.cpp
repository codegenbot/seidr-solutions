#include <vector>
#include <iostream>
#include <cassert>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water_units = 0;
    for (const auto& row : grid) {
        for (int cell : row) {
            total_water_units += cell;
        }
    }
    return (total_water_units + capacity - 1) / capacity; // Ceiling division
}

int main() {
    assert(max_fill({{1, 1, 1, 1}, {1, 1, 1, 1}}, 9) == 2);
    std::cout << "Test passed!" << std::endl;
    return 0;
}