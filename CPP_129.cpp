#include <vector>
#include <queue>
#include <tuple>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> result;
    auto cmp = [](const tuple<int, int, int, vector<int>>& a, const tuple<int, int, int, vector<int>>& b) {
        return get<3>(a) > get<3>(b);
    };
    priority_queue<tuple<int, int, int, vector<int>>, vector<tuple<int, int, int, vector<int>>>, decltype(cmp)> pq(cmp);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({i, j, 1, {grid[i][j]}});
        }
    }
    
    vector<int> directions = {-1, 0, 1, 0, -1};
    
    while (!pq.empty()) {
        auto [x, y, length, path] = pq.top();
        pq.pop();
        
        if (length == k) {
            return path;
        }
        
        for (int d = 0; d < 4; ++d) {
            int nx = x + directions[d];
            int ny = y + directions[d + 1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = path;
                newPath.push_back(grid[nx][ny]);
                pq.push({nx, ny, length + 1, newPath});
            }
        }
    }
    
    return result;
}