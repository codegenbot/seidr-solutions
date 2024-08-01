#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int max_fill(vector<std::vector<int>> grid, int capacity) {
    if (capacity == 0) return 0;
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    return total_water / capacity;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}