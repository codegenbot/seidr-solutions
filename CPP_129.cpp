#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (res.size() < k) {
                res.push_back(grid[i][j]);
                if (res.size() == k) break;
            } else {
                int max_val = -1;
                for (int x = i - 1; x <= i + 1 && x >= 0 && x < n; ++x) {
                    for (int y = j - 1; y <= j + 1 && y >= 0 && y < n; ++y) {
                        if (x == i && y == j) continue;
                        if (grid[x][y] > max_val) max_val = grid[x][y];
                    }
                }
                res.push_back(max_val);
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    return 0;
}