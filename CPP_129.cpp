#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int maxVal = -1;
        int row = -1, col = -1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int c = 0; c < grid[0].size(); ++c) {
                if (grid[j][c] > maxVal && res.empty() || find(res.begin(), res.end(), grid[j][c]) == res.end()) {
                    maxVal = grid[j][c];
                    row = j;
                    col = c;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid[0].size(); ++i) {
            if (row > 0 && i == col) continue;
            if (row < grid.size() - 1 && i == col) continue;
            if (row > 0 && i < col) {
                --row;
            } else if (row < grid.size() - 1 && i > col) {
                ++row;
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
    cout << endl;
    return 0;
}