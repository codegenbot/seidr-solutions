```cpp
#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int times = total_water / capacity;
    if (total_water % capacity > 0)
        times++;
    
    return times;
}

int main() {
    // Example usage
    std::vector<std::vector<int>> grid = {{1,2,3},{4,5,6}};
    int capacity = 7;
    int result = max_fill(grid, capacity);
    std::cout << "Maximum number of times to fill the bucket: " << result << std::endl;

    return 0;
}