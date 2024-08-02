#include <vector>
#include <cassert>

using namespace std;

bool issameVector(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    vector<int> path;
    
    int rows = grid.size();
    int cols = grid[0].size();
    
    int curRow = 0, curCol = 0;
    path.push_back(grid[curRow][curCol]);
    
    while (k > 1) {
        if (curRow % 2 == 0) {
            if (curCol < cols - 1) {
                curCol++;
            } else {
                curRow++;
            }
        } else {
            if (curCol > 0) {
                curCol--;
            } else {
                curRow++;
            }
        }
        
        k--;
        path.push_back(grid[curRow][curCol]);
    }
    
    return path;
}