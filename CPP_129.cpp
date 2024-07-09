#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int minVal = INT_MAX, cellIndex = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[0].size(); col++) {
                if (grid[j][col] <= minVal) {
                    minVal = grid[j][col];
                    cellIndex = j * grid[0].size() + col;
                }
            }
        }
        res.push_back(minVal);
        for (int i = 0; i < grid.size(); i++) {
            if (i == cellIndex / grid[0].size()) {
                for (int j = 0; j < grid[0].size(); j++) {
                    grid[i][j] = INT_MAX;
                }
            } else {
                for (int j = 0; j < grid[0].size(); j++) {
                    if (grid[i][j] == minVal) {
                        grid[i][j] = INT_MAX;
                    }
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
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}