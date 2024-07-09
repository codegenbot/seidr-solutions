Here's the corrected code:

```cpp
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Pair {
    vector<int> vec;
    pair<int, int> pos;
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<struct Pair, vector<struct Pair>, 
        function<bool(const struct Pair &, const struct Pair &)>> pq(
        [](const auto& p1, const auto& p2) { return p1.vec[0] > p2.vec[0]; });
    pq.push({{grid[0][0], {0, 0}}, {0, 0}});
    vector<int> res;
    
    while (!pq.empty()) {
        auto [val, path] = pq.top();
        pq.pop();
        
        if (path.second.first == k) {
            return path.second.second;
        }
        
        int r = path.second.first / n, c = path.second.second % n;
        
        for (int dr = -1; dr <= 1; dr++) {
            for (int dc = -1; dc <= 1; dc++) {
                if (dr == 0 && dc == 0) continue;
                
                int nr = r + dr, nc = c + dc;
                
                if (nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    pq.push({{val, {path.second.first, path.second.second + 1}}, {nr, nc}});
                }
            }
        }
    }
    
    return {};
}