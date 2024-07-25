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
    int rows, cols, capacity;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;
    std::vector<std::vector<int>> grid(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Enter value at (" << i << ", " << j << "): ";
            std::cin >> grid[i][j];
        }
    }
    std::cout << "Enter capacity: ";
    std::cin >> capacity;
    
    int result = max_fill(grid, capacity);
    std::cout << "Maximum number of times the tank can be filled is: " << result << std::endl;

    return 0;
}