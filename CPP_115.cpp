#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<std::vector<int>> grid(3, std::vector<int>(3)); 

    for (int i = 0; i < 3; i++) {
        grid[i].push_back(1 + i + 2 * i);
    }

    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;

    // your logic here...

    return 0;
}