#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < min(k, static_cast<int>(grid.size())); ++i) {
        for (int j = 0; j < min(k, static_cast<int>(grid.size())); ++j) {
            for (int l = 0; l < min(k, static_cast<int>(grid[j].size())); ++l) {
                result.push_back(grid[j][l]);
            }
        }
    }
    return result;
}