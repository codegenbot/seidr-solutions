#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int totalElements = 0;
    for (int i = 0; i < grid.size(); i++) {
        totalElements += grid[i].size();
    }

    if (k >= 0 && k < totalElements) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (count == k) {
                    result.push_back(grid[i][j]);
                    return result;
                }
                count++;
            }
        }
    }

    return result;
}