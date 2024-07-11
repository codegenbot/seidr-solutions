#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int minVal = INT_MAX;
        int row, col;
        for (int j = 0; j < grid.size(); j++) {
            for (int x = 0; x < grid[0].size(); x++) {
                if (grid[j][x] <= minVal) {
                    minVal = grid[j][x];
                    row = j;
                    col = x;
                }
            }
        }
        result.push_back(minVal);
        for (int i = 0; i < grid.size(); i++) {
            for (int x = 0; x < grid[0].size(); x++) {
                if (i == row && x == col) {
                    grid[i][x] = INT_MAX;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto x : result) {
        cout << x << " ";
    }
    return 0;
}