#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water > capacity) {
                total_water += capacity;
            } else {
                total_water += water;
            }
        }
    }
    return total_water / capacity;
}