#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct MyPair {
    vector<int> val;
    pair<int, int> pos;
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<MyPair, vector<MyPair>, function<bool(const MyPair &, const MyPair &)>> pq([](const MyPair &a, const MyPair &b) { return a.val > b.val; });
    
    // Create the initial pair
    pq.push({{grid[0][0], {grid[0][0]}}, {0, 0}});
    
    while (!pq.empty()) {
        auto [val, pos] = pq.top();
        pq.pop();
        
        if (pos.second == k) {
            return val;
        }
        
        int r = pos.second / n, c = pos.second % n;
        
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;
                
                int nr = r + dr, nc = c + dc;
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({{val + grid[nr][nc], {grid[nr][nc]}}, {pos.second + 1}});
                }
            }
        }
    }
    
    return {};
}