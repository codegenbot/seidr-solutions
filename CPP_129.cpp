#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<int> result;
    
    for (int i = 0; i < k; ++i) {
        int maxVal = INT_MIN;
        pair<int, int> pos;
        
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] > maxVal && (j == 0 || j == grid.size() - 1 || col == 0 || col == grid[0].size() - 1)) {
                    maxVal = grid[j][col];
                    pos = {j, col};
                }
            }
        }
        
        result.push_back(maxVal);
        grid[pos.first][pos.second] = INT_MIN;
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