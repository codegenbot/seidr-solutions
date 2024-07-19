#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    auto cmp = [&](const pair<int, int>& a, const pair<int, int>& b) {
        return grid[a.first][a.second] < grid[b.first][b.second];
    };
    
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n;
    };
    
    auto dfs = [&](int x, int y, int len) {
        visited[x][y] = true;
        path.push_back(grid[x][y]);
        
        if (len == k) {
            return;
        }
        
        vector<pair<int, int>> neighbors;
        for (auto& dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny) && !visited[nx][ny]) {
                neighbors.push_back({nx, ny});
            }
        }
        
        sort(neighbors.begin(), neighbors.end(), cmp);
        
        for (auto& neighbor : neighbors) {
            dfs(neighbor.first, neighbor.second, len + 1);
            if (path.size() == k) {
                return;
            }
        }
        
        visited[x][y] = false;
        path.pop_back();
    };
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dfs(i, j, 1);
            if (path.size() == k) {
                return path;
            }
        }
    }
    
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}