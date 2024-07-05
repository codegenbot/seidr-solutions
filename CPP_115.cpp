#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (const auto &row : grid) {
        int water_units = 0;
        for (int cell : row) {
            if (cell == 1) water_units++;
        }
        count += (water_units + capacity - 1) / capacity; // Ceiling division
    }
    return count;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    cout << "Test passed." << endl;
    return 0;
}