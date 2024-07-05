#include <vector>
#include <iostream>
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
    int rows, cols, capacity;
    cin >> rows >> cols >> capacity;
    vector<vector<int>> grid(rows, vector<int>(cols));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << max_fill(grid, capacity) << endl;
    return 0;
}