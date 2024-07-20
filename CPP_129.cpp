#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                res.push_back(1);
                for (int l = 0; l < k - 1; l++) {
                    int x = (i + 1) % n;
                    int y = (j + 1) % n;
                    if ((x != i || j == 0 && y == 1) && (y != j || i == 0 && x == 1)) {
                        res.push_back(grid[x][y]);
                        i = x;
                        j = y;
                    } else {
                        break;
                    }
                }
                return res;
            }
        }
    }
    return {};
}