#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0)
        ++buckets_needed;
    
    return buckets_needed;

int main() {
    // Read input from the user
    int n, m;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> n >> m;

    std::vector<std::vector<int>> grid(n);
    for (int i = 0; i < n; ++i) {
        grid[i].resize(m);
        for (int j = 0; j < m; ++j) {
            int water;
            std::cout << "Enter the amount of water in cell (" << i << ", " << j << "): ";
            std::cin >> water;
            grid[i][j] = water;
        }
    }

    // Read the capacity
    int capacity;
    std::cout << "Enter the bucket's capacity: ";
    std::cin >> capacity;

    // Call the max_fill function and print the result
    int buckets = max_fill(grid, capacity);
    std::cout << "The minimum number of buckets needed is: " << buckets << std::endl;

    return 0;
}