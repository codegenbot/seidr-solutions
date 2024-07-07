```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int maxRow = -1, maxValue = 0;
        for (int j = 0; j < grid.size(); j++) {
            if (grid[j][i] > maxValue) {
                maxValue = grid[j][i];
                maxRow = j;
            }
        }
        result.push_back(maxValue);
        grid[maxRow].erase(grid[maxRow].begin());
    }
    return result;
}