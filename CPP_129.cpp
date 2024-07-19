#include <vector>
#include <queue>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    std::vector<std::vector<int>> dist(m, std::vector<int>(n, INT_MAX));
    dist[0][0] = grid[0][0];
    
    std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, std::greater<>> pq;
    pq.push({grid[0][0], {0, 0}});
    
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    
    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();
        int x = curr.second.first;
        int y = curr.second.second;
        
        if (x == m-1 && y == n-1) {
            break;
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                int new_dist = dist[x][y] + grid[nx][ny];
                if (new_dist < dist[nx][ny] && new_dist <= k) {
                    dist[nx][ny] = new_dist;
                    pq.push({new_dist, {nx, ny}});
                }
            }
        }
    }
    
    return dist[m-1][n-1] == INT_MAX ? std::vector<int>{} : std::vector<int>{m-1, n-1};
}