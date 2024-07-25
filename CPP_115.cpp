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
                grid[i][0] = 0;
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
    int n, m, capacity;
    std::cin >> n >> m >> capacity;

    std::vector<std::vector<int>> grid(n, std::vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val;
            std::cin >> val;
            grid[i][j] = val;
        }
    }

    std::cout << max_fill(grid, capacity);

    return 0;
}