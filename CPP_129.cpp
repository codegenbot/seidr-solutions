#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (res.empty() || res.back() != grid[i][j]) {
                res.push_back(grid[i][j]);
                k--;
                if (k == 0) return res;
            }
        }
    }
    return res;
}