#include <vector>
#include <algorithm>
#include <queue>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    
    std::vector<int> dx = {1, 0, -1, 0};
    std::vector<int> dy = {0, 1, 0, -1};
    
    std::vector<int> dist(m * n, INT_MAX);
    dist[0] = 0;
    
    std::queue<int> q;
    q.push(0);
    
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        
        int x = curr / n, y = curr % n;
        
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                int next = nx * n + ny;
                int cost = dist[curr] + grid[nx][ny];
                
                if (cost < dist[next]) {
                    dist[next] = cost;
                    q.push(next);
                }
            }
        }
    }
    
    std::vector<int> result;
    for (int i = 0; i < k; ++i) {
        int x = i / n, y = i % n;
        result.push_back(dist[i] + grid[x][y]);
    }
    
    return result;
}