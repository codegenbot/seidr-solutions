#include <iostream>
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
            int val = grid[i][j];
            vector<vector<int>> newGrid(n - 2, vector<int>(n - 2));
            int cnt = 0;
            for (int x = 0; x < n; x++) {
                if (x != i) {
                    for (int y = 0; y < n; y++) {
                        if (y != j) {
                            newGrid[x][y] = grid[x][y];
                            cnt++;
                        }
                    }
                }
            }
            res.push_back(val);
            vector<int> temp = minPath(newGrid, k - 1);
            for (int i = 0; i < temp.size(); i++) {
                res.push_back(temp[i]);
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}