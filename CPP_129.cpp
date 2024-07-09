#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int minVal = INT_MAX, minRow = -1, minCol = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] <= minVal) {
                    minVal = grid[j][col];
                    minRow = j;
                    minCol = col;
                }
            }
        }
        res.push_back(minVal);
        for (int i = 0; i < grid.size(); i++) {
            if (i == minRow) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (j != minCol) {
                        grid[i][j]--;
                    }
                }
            } else {
                for (int j = 0; j < grid[i].size(); j++) {
                    grid[i][j]--;
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