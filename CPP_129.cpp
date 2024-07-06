#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int minVal = INT_MAX;
        int minRow = -1, minCol = -1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] <= minVal && res.empty() || (res.back() != grid[j][col])) {
                    minVal = grid[j][col];
                    minRow = j;
                    minCol = col;
                }
            }
        }
        res.push_back(minVal);
        for (int i = 0; i < grid.size(); ++i) {
            if (i == minRow) continue;
            grid[i][minCol] = INT_MAX;
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;