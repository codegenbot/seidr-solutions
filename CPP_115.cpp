#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            total_water += water;
        }
    }
    return total_water / capacity;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    std::cout << "Test passed.\n";
    return 0;
}