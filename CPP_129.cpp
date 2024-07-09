#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int minVal = INT_MAX;
        int minRow = -1, minCol = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] <= minVal) {
                    minVal = grid[j][col];
                    minRow = j;
                    minCol = col;
                }
            }
        }
        result.push_back(minVal);
        for (int i = 0; i < grid.size(); i++) {
            grid[i][minCol] = INT_MAX;
        }
        for (int i = 0; i < grid[0].size(); i++) {
            grid[minRow][i] = INT_MAX;
        }
    }
    return result;
}