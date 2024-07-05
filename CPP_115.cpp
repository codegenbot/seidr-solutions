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
    return (total_water_units + capacity - 1) / capacity; // Ceiling division
}

int main() {
    int n, m, capacity;
    cin >> n >> m >> capacity;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }
    cout << max_fill(grid, capacity) << endl;
    return 0;
}