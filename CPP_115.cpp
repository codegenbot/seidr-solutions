#include <vector>
#include <cassert>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water_units = 0;
    for (const auto& row : grid) {
        for (int cell : row) {
            total_water_units += cell;
        }
    }
    return (total_water_units + capacity - 1) / capacity; // Ceiling division
}

int main() {
    assert(max_fill({{1, 1, 1, 1}, {1, 1, 1, 1}}, 9) == 2);
    assert(max_fill({{2, 2}, {2, 2}}, 4) == 2); // Additional test case
    assert(max_fill({{1, 2, 3}, {4, 5, 6}}, 10) == 2); // Additional test case
    assert(max_fill({{0, 0, 0}, {0, 0, 0}}, 1) == 0); // Additional test case
    return 0;
}