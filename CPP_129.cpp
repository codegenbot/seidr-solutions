#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dist(n, vector<int>(n, 1e9));
    vector<vector<pair<int, int>>> dir({{0, 1}, {0, -1}, {1, 0}, {-1, 0}});
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    dist[0][0] = grid[0][0];
    pq.push({grid[0][0], {0, 0}});
    
    while (!pq.empty()) {
        int d = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (k-- == 0) break;
        
        for (auto& dir : dir) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                int nd = d + grid[nx][ny];
                
                if (nd < dist[nx][ny]) {
                    dist[nx][ny] = nd;
                    pq.push({nd, {nx, ny}});
                }
            }
        }
    }
    
    vector<int> res;
    for (int i = 0; i <= k; i++) {
        int x = i % n;
        int y = i / n;
        
        while (k-- > 0) {
            for (auto& dir : dir) {
                int nx = x + dir[0];
                int ny = y + dir[1];
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                    if (dist[nx][ny] < dist[x][y]) {
                        res.push_back(grid[nx][ny]);
                        x = nx;
                        y = ny;
                        break;
                    }
                }
            }
        }
    }
    
    return res;
}