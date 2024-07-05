#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    auto cmp = [](const vector<int>& a, const vector<int>& b) {
        return a > b;
    };
    
    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({grid[i][j], i, j});
        }
    }
    
    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        
        vector<int> path = {current[0]};
        int x = current[1], y = current[2];
        
        queue<tuple<int, int, vector<int>>> q;
        q.push({x, y, path});
        
        while (!q.empty()) {
            auto [cx, cy, cpath] = q.front();
            q.pop();
            
            if (cpath.size() == k) {
                return cpath;
            }
            
            for (auto& dir : directions) {
                int nx = cx + dir[0];
                int ny = cy + dir[1];
                
                if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                    vector<int> newPath = cpath;
                    newPath.push_back(grid[nx][ny]);
                    q.push({nx, ny, newPath});
                }
            }
        }
    }
    
    return {};
}