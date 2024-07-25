#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>>& grid, int capacity) {
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
    int n, m;
    std::cout << "Enter number of rows: ";
    std::cin >> n;
    std::cout << "Enter number of columns: ";
    std::cin >> m;

    std::vector<std::vector<int>> grid(n, std::vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "Enter value for [" << i << "][" << j << "]: ";
            std::cin >> grid[i][j];
        }
    }

    int capacity;
    std::cout << "Enter the water tank's capacity: ";
    std::cin >> capacity;

    std::cout << "Maximum number of times the water tank can be filled: "
              << max_fill(grid, capacity);

    return 0;
}