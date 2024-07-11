#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int maxVal = -1;
        int maxRow = -1;
        int maxCol = -1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] > maxVal && !find(res.begin(), res.end(), grid[j][col])) {
                    maxVal = grid[j][col];
                    maxRow = j;
                    maxCol = col;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); ++i) {
            if (i == maxRow) {
                continue;
            }
            for (int j = 0; j < grid[i].size(); ++j) {
                if (j == maxCol) {
                    continue;
                }
                grid[i][j] -= maxVal;
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}