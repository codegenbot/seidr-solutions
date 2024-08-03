#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            
            vector<int> path = {grid[i][j]};
            dfs(grid, i, j, k - 1, &path);
            res = path;
        }
    }
    
    return res;
}

void dfs(vector<vector<int>>& grid, int x, int y, int k, vector<int>* path) {
    int n = grid.size();
    if (k == 0) {
        return;
    }
    
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    random_shuffle(directions.begin(), directions.end());
    
    for (auto& dir : directions) {
        int nx = x + dir.first;
        int ny = y + dir.second;
        
        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
            path->push_back(grid[nx][ny]);
            dfs(grid, nx, ny, k - 1, path);
            if (k == 1) {
                return;
            }
            
            path->pop_back();
        }
    }
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    
    for (auto& val : res) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}