#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (res.size() == k) return res;
            if (grid[i][j] <= n * n && find(res.begin(), res.end(), grid[i][j]) == res.end()) {
                res.push_back(grid[i][j]);
                if (res.size() == k) break;
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