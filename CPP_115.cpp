```cpp
#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    std::vector<int> wells(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            wells[i] += grid[i][j];
        }
    }

    int times = 0;
    while (true) {
        bool changed = false;

        for (int i = 0; i < n; ++i) {
            if (wells[i] > 0) {
                wells[i] -= capacity;
                if (wells[i] <= 0) {
                    wells[i] = 0;
                    changed = true;
                }
            }
        }

        if (!changed)
            break;

        times++;
    }

    return times;
}

int main() {
    int n, m, capacity;
    std::cout << "Enter number of wells: ";
    std::cin >> n;
    std::cout << "Enter number of days: ";
    std::cin >> m;
    std::cout << "Enter the capacity of each well: ";
    std::cin >> capacity;

    std::vector<std::vector<int>> grid(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "Enter the amount of water in well " << i + 1 << " on day " << j + 1 << ": ";
            std::cin >> grid[i][j];
        }
    }

    int max_fill_days = max_fill(grid, capacity);
    std::cout << "Maximum number of days to fill all wells: " << max_fill_days << std::endl;

    return 0;
}