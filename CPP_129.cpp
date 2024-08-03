#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                pq.push({grid[i][j], {i, j}});
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        res.push_back(val);
        pq.pop();
        
        vector<pair<int, int>> neighbors = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto &neighbor : neighbors) {
            int x = pos.first + neighbor.first;
            int y = pos.second + neighbor.second;
            
            if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                visited[x][y] = true;
                pq.push({val, {x, y}});
            }
        }
        
        if (res.size() == k) break;
    }
    
    return res;
}