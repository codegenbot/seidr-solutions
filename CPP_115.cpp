#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water_units = 0;
    for (const auto& row : grid) {
        for (int cell : row) {
            total_water_units += cell;
        }
    }
    return (total_water_units + capacity - 1) / capacity;
}

int main() {
    assert(max_fill({{1, 1, 1, 1}, {1, 1, 1, 1}}, 9) == 1);
    assert(max_fill({{1, 1, 1, 1}, {1, 1, 1, 1, 1}}, 9) == 2);
    cout << "All tests passed!" << endl;
    return 0;
}