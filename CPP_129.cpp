#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k > 0) {
                vector<vector<int>> newGrid(n, vector<int>(n));
                int val = grid[i][j];
                res.push_back(val);
                k--;
                for (int x = 0; x < n; ++x) {
                    for (int y = 0; y < n; ++y) {
                        if ((x == i && y != j) || (x != i && y == j)) {
                            newGrid[x][y] = val;
                        } else {
                            newGrid[x][y] = grid[x][y];
                        }
                    }
                }
                grid = newGrid;
            } else {
                break;
            }
        }
    }
    
    return res;
}