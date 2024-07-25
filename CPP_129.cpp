#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<pair<int, pair<int, int>>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<int> result;
    
    for (int i = 0; i < k; ++i) {
        int minVal = INT_MAX;
        int minRow, minCol;
        
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (!result.empty() && result.back() == grid[j][col]) continue;
                
                int val = grid[j][col];
                bool isMin = true;
                
                for (const auto& dir : directions) {
                    int newRow = j + dir.first, newCol = col + dir.second;
                    
                    if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size()) {
                        isMin &= val <= grid[newRow][newCol];
                    } else {
                        isMin = false;
                        break;
                    }
                }
                
                if (isMin && val < minVal) {
                    minVal = val;
                    minRow = j;
                    minCol = col;
                }
            }
        }
        
        result.push_back(minVal);
    }
    
    return result;
}