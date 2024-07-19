#include <vector>
#include <queue>
#include <unordered_set>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> dx = {0, 0, 1, -1};
    std::vector<int> dy = {1, -1, 0, 0};
    std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, std::greater<>> pq;
    pq.push({0, 0, 0});
    int m = grid.size(), n = grid[0].size();
    std::vector<std::vector<int>> dist(m, std::vector<int>(n, INT_MAX));
    dist[0][0] = 0;
    std::unordered_set<int> seen;
    
    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();
        int x = curr[1], y = curr[2], d = curr[0];
        
        if (x == m-1 && y == n-1) {
            return {d};
        }
        
        if (seen.count(x*n+y)) {
            continue;
        }
        seen.insert(x*n + y);
        
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                int nd = d + grid[nx][ny];
                if (nd < dist[nx][ny]) {
                    dist[nx][ny] = nd;
                    pq.push({nd, nx, ny});
                }
            }
        }
    }
    
    return {-1};
}