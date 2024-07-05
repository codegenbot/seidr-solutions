#include <vector>
#include <iostream>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water_units = 0;
    for (const auto& row : grid) {
        for (int water_unit : row) {
            total_water_units += water_unit;
        }
    }
    return (total_water_units + capacity - 1) / capacity;
}

int main() {
    cout << max_fill({{1, 1, 1, 1}, {1, 1, 1, 1}}, 9) << endl;
    return 0;
}