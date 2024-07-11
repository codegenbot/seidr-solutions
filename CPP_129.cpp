#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = 1;
            }
        }
    }
    
    while (!pq.empty()) {
        pair<int, int> cur = pq.top().second;
        pq.pop();
        
        if (k > 0) {
            res.push_back(grid[cur.first][cur.second]);
            k--;
        }
        
        vector<pair<int, int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto &neighbor : neighbors) {
            int x = cur.first + neighbor.first;
            int y = cur.second + neighbor.second;
            
            if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                pq.push({grid[x][y], {x, y}});
                visited[x][y] = 1;
            }
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto &num : result) {
        cout << num << " ";
    }
    return 0;
}