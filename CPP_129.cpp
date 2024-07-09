#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = 1;
            }
        }
    }
    
    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();
        
        res.push_back(val);
        
        if (k > 0) {
            --k;
            
            vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            random_shuffle(dirs.begin(), dirs.end());
            
            for (auto dir : dirs) {
                int ni = pos.first + dir.first;
                int nj = pos.second + dir.second;
                
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                    pq.push({grid[ni][nj], {ni, nj}});
                    visited[ni][nj] = 1;
                }
            }
        } else {
            break;
        }
    }
    
    return res;
}