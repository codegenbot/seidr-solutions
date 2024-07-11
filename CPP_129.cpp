#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (res.size() == k) return res;
            bool found = false;
            for (int x = max(0, i-1); x <= min(grid.size()-1, i+1); x++) {
                for (int y = max(0, j-1); y <= min(grid[0].size()-1, j+1); j++) {
                    if (x != i || y != j) {
                        found = true;
                        res.push_back(grid[x][y]);
                        break;
                    }
                }
                if (found) break;
            }
        }
    }
    return {};
}