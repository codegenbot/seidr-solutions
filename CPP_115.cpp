#include <iostream>
#include <vector>
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
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> grid(rows, vector<int>(cols));
    cout << "Enter the grid values: ";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }
    cout << "Enter capacity: ";
    cin >> capacity;
    cout << "Result: " << max_fill(grid, capacity) << endl;
    return 0;
}