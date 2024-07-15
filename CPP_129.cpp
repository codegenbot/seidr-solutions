#include <vector>

vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    int N = grid.size();
    int M = grid[0].size();
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;
    pq.push({0, {0, 0}});
    
    vector<vector<int>> dist(N, vector<int>(M, INT_MAX));
    dist[0][0] = 0;
    
    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    while (!pq.empty()) {
        auto curr = pq.top();
        pq.pop();
        
        int x = curr.second.first;
        int y = curr.second.second;
        
        for (auto dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                int new_dist = dist[x][y] + grid[nx][ny];
                
                if (new_dist < dist[nx][ny]) {
                    dist[nx][ny] = new_dist;
                    pq.push({new_dist, {nx, ny}});
                }
            }
        }
    }
    
    result.push_back(dist[N-1][M-1] <= k ? dist[N-1][M-1] : -1);
    
    return result;
}

assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));