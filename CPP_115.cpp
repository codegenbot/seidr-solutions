#include <iostream>
#include <vector>

int count_buckets(std::vector<std::vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            total_water += grid[i][j];
        }
    }
    
    int buckets_needed = total_water / capacity;
    
    if (total_water % capacity != 0) {
        buckets_needed++;
    }
    
    return buckets_needed;
}

int main() {
    int n, m, num;
    std::vector<std::vector<int>> grid;

    std::cout << "Enter the number of rows and columns in the grid: ";
    std::cin >> n >> m;

    if (n <= 0 || m <= 0) {
        std::cout << "Invalid grid dimensions. Exiting program.";
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        std::vector<int> row;
        for (int j = 0; j < m; ++j) {
            std::cout << "Enter the number at position (" << i << ", " << j << "): ";
            std::cin >> num;
            row.push_back(num);
        }
        grid.push_back(row);
    }

    int capacity;
    std::cout << "Enter the capacity of each bucket: ";
    std::cin >> capacity;

    if (capacity <= 0) {
        std::cout << "Invalid capacity. Exiting program.";
        return 1;
    }

    int buckets = count_buckets(grid, capacity);
    std::cout << "Number of buckets needed: " << buckets;

    return 0;
}