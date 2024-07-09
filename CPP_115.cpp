#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid = {{0,1,0},{0,0,0},{0,1,0}};
    int capacity = 3;
    
    int result = max_fill(grid, capacity);
    
    if (result != -1) {
        std::cout << "The minimum number of steps required to fill the tank is: " << result << "\n";
    } else {
        std::cout << "Invalid input.\n";
    }
    return 0;
}

int max_fill(vector<vector<int>> grid, int capacity) {
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