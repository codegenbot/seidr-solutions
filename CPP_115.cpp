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
}

int main() {
    // Example usage:
    std::vector<std::vector<int>> grid{{1, 2, 3}, {4, 5, 6}};
    int capacity = 10;
    int result = max_fill(grid, capacity);
    std::cout << "The maximum number of buckets needed to fill the grid is: " << result << std::endl;

    return 0;
}