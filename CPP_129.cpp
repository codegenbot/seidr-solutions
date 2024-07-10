#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxRow = 0, maxValue = 0;
        for (int j = 0; j < grid.size(); j++) {
            if (grid[j][0] > maxValue) {
                maxRow = j;
                maxValue = grid[j][0];
            }
        }
        res.push_back(maxValue);
        for (int j = 0; j < grid.size(); j++) {
            if (j != maxRow) {
                swap(grid[j][0], grid[maxRow][0]);
                swap(maxRow, j);
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}