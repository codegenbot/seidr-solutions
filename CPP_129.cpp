#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxVal = 1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] > maxVal) {
                    maxVal = grid[j][col];
                    res.push_back(maxVal);
                }
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