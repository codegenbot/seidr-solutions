#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (const auto &row : grid) {
        int water_units = 0;
        for (int cell : row) {
            if (cell == 1) water_units++;
        }
        count += (water_units + capacity - 1) / capacity;
    }
    return count;
}

int main() {
    // Placeholder test cases
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 3) == 3);
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 6) == 2);
    assert(max_fill({{1,1,1,1}, {0,0,0,0}}, 5) == 1);
    
    // User input logic
    int rows, columns, capacity;
    cin >> rows >> columns >> capacity;
    vector<vector<int>> grid(rows, vector<int>(columns));
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cin >> grid[i][j];
        }
    }
    cout << max_fill(grid, capacity) << endl;
    return 0;
}