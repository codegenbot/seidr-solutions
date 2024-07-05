#include <vector>
#include <queue>
#include <tuple>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(k + 1, INT_MAX)));
    vector<vector<vector<vector<int>>>> path(N, vector<vector<vector<int>>>(N, vector<vector<int>>(k + 1)));
    
    auto cmp = [](const tuple<int, int, int, vector<int>>& a, const tuple<int, int, int, vector<int>>& b) {
        return get<3>(a) > get<3>(b);
    };
    
    priority_queue<tuple<int, int, int, vector<int>>, vector<tuple<int, int, int, vector<int>>>, decltype(cmp)> pq(cmp);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({i, j, 1, {grid[i][j]}});
            dp[i][j][1] = grid[i][j];
            path[i][j][1] = {grid[i][j]};
        }
    }
    
    vector<int> directions = {-1, 0, 1, 0, -1};
    
    while (!pq.empty()) {
        auto [x, y, length, currentPath] = pq.top();
        pq.pop();
        
        if (length == k) {
            return currentPath;
        }
        
        for (int d = 0; d < 4; ++d) {
            int nx = x + directions[d];
            int ny = y + directions[d + 1];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = currentPath;
                newPath.push_back(grid[nx][ny]);
                
                if (newPath < path[nx][ny][length + 1]) {
                    path[nx][ny][length + 1] = newPath;
                    pq.push({nx, ny, length + 1, newPath});
                }
            }
        }
    }
    
    return {};
}