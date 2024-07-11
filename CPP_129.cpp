#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxVal = -1;
        int row = -1, col = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int l = 0; l < grid[0].size(); l++) {
                if (grid[j][l] > maxVal) {
                    maxVal = grid[j][l];
                    row = j;
                    col = l;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (i == row && j == col) {
                    grid[i][j] = -1;
                }
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