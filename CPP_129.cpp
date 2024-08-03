#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            vector<vector<int>> tempGrid;
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) continue;
                    int newX = i + x, newY = j + y;
                    if (newX >= 0 && newX < n && newY >= 0 && newY < n) {
                        tempGrid.push_back({grid[newX][newY]});
                    }
                }
            }
            vector<int> minPath = minPath(tempGrid, k - 1);
            res.insert(res.end(), minPath.begin(), minPath.end());
            if (res.size() == k) return res;
        }
    }
    return res;
}