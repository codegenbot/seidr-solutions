#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> result;
    
    while (k > 0) {
        int min_val = INT_MAX;
        pair<int, int> min_pos = {0, 0};
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] < min_val) {
                    min_val = grid[i][j];
                    min_pos = {i, j};
                }
            }
        }
        
        result.push_back(min_val);
        grid[min_pos.first][min_pos.second] = INT_MAX;
        
        k--;
    }

    return result;
}