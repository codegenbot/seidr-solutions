#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int result = 0;
    for (const auto& well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += min(capacity, unit);
            }
        }
        while (water > 0) {
            capacity = std::min(capacity, water);
            result++;
            water -= capacity;
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> grid = {{1,1,1,1}, {1,1,1,1}};
    int result = max_fill(grid, 9);
    std::cout << "Result: " << result << std::endl;
    return 0;
}