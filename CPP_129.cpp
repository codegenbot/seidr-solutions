#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct MyPair {
    vector<int> path;
    pair<int, int> pos;
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<MyPair, vector<MyPair>, greater<MyPair>>
            pq({{grid[0][0], {0, 0}}});
    vector<int> res;
    
    while (!pq.empty()) {
        auto [val, path] = pq.top();
        pq.pop();
        
        if (path.size() == k) {
            return val;
        }
        
        int r = path.second / n, c = path.second % n;
        
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;
                
                int nr = r + dr, nc = c + dc;
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({val, {path.second + 1, pair<int, int>(nr, nc)}});
                }
            }
        }
    }
    
    return {};
}