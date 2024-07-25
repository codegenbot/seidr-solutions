#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    while (true) {
        bool filled = false;
        for (int i = 0; i < grid.size(); i++) {
            int water = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    water++;
                }
            }
            while (water > 0 && capacity > 0) {
                grid[i][j] = 0;
                water--;
                capacity--;
            }
            if (capacity == 0) {
                filled = true;
                break;
            }
        }
        if (filled) {
            count++;
            for (int i = 0; i < grid.size(); i++) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (grid[i][j] == 1) {
                        return -1;
                    }
                }
            }
        } else {
            break;
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<int>> grid = {{0, 1, 1}, {1, 1, 1}, {0, 0, 0}};
    int capacity = 3;
    int maxFilled = max_fill(grid, capacity);
    if (maxFilled != -1) {
        std::cout << "The maximum number of times the grid can be filled is: " << maxFilled << std::endl;
    } else {
        std::cout << "The grid cannot be fully filled." << std::endl;
    }
    return 0;
}