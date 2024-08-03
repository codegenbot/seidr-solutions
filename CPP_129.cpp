#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    int nx = i + x, ny = j + y;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        res.push_back(grid[nx][ny]);
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}