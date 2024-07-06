#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxVal = -1, maxRow = -1, maxCol = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] > maxVal) {
                    maxVal = grid[j][col];
                    maxRow = j;
                    maxCol = col;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (i == maxRow && j == maxCol) {
                    grid[i][j] = -1;
                }
            }
        }
    }
    return res;
}