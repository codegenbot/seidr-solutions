#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water++;
            }
        }
    }

    return total_water / capacity + (total_water % capacity != 0);
}

int main() {
    std::vector<std::vector<int>> grid = {{1,1,1,1}, {1,1,1,1}};
    assert(max_fill(grid, 9) == 2);
    return 0;
}