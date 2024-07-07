```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int maxRow = -1, maxValue = 0;
        for (int j = 0; j < grid.size(); j++) {
            if (grid[j][i] > maxValue) {
                maxValue = grid[j][i];
                maxRow = j;
            }
        }
        result.push_back(maxValue);
        grid[maxRow].erase(grid[maxRow].begin());
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}