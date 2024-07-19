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
    int rows, cols, capacity;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    std::cout << "Enter the capacity: ";
    std::cin >> capacity;

    std::vector<std::vector<int>> grid(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            std::cout << "Enter the value at row " << i + 1 << ", column " << j + 1 << ": ";
            std::cin >> value;
            grid[i][j] = value;
        }
    }

    int maxFillTimes = max_fill(grid, capacity);
    std::cout << "Maximum number of times to fill the wells: " << maxFillTimes << std::endl;

    return 0;
}