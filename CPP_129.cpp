#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dist(n, vector<int>(n, 1e9));
    vector<vector<pair<int, int>>> graph(n, vector<pair<int, int>>(n));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (i > 0) graph[i][j].push_back({dist[i-1][j], i-1, j});
            if (j > 0) graph[i][j].push_back({dist[i][j-1], i, j-1});
            if (i < n - 1) graph[i][j].push_back({dist[i+1][j], i+1, j});
            if (j < n - 1) graph[i][j].push_back({dist[i][j+1], i, j+1});
        }
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0, 0});
    dist[0][0] = 0;
    
    while (!pq.empty()) {
        int d = pq.top().first; pq.pop();
        if (d > k) break;
        for (auto& neighbor : graph[pq.top().second][pq.top().third]) {
            int nd = d + 1;
            if (nd < dist[neighbor.second][neighbor.third]) {
                dist[neighbor.second][neighbor.third] = nd;
                pq.push({nd, neighbor.second, neighbor.third});
            }
        }
    }
    
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int x = -1;
        for (int j = 0; j < n; ++j)
            if (dist[j][0] == dist[0][0] - i) {x = j; break;}
        res.push_back(grid[x][0]);
    }
    
    return res;
}