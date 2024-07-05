#include <stdio.h>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    auto comp = [](const tuple<int, int, vector<int>>& a, const tuple<int, int, vector<int>>& b) {
        return get<2>(a) > get<2>(b);
    };
    priority_queue<tuple<int, int, vector<int>>, vector<tuple<int, int, vector<int>>>, decltype(comp)> pq(comp);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({i, j, {grid[i][j]}});
        }
    }
    
    while (!pq.empty()) {
        auto [x, y, path] = pq.top();
        pq.pop();
        
        if (path.size() == k) return path;
        
        for (auto& dir : directions) {
            int nx = x + dir[0], ny = y + dir[1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = path;
                newPath.push_back(grid[nx][ny]);
                pq.push({nx, ny, newPath});
            }
        }
    }
    
    return {};
}