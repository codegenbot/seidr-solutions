#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    if (k == 0) return {};

    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    auto compare = [](const vector<int>& a, const vector<int>& b) {
        return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    };

    priority_queue<vector<int>, vector<vector<int>>, decltype(compare)> pq(compare);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({grid[i][j], i, j});
        }
    }
    
    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        
        vector<int> path(current.begin(), current.end() - 2);
        if (path.size() == k) {
            return path;
        }
        
        int x = current[current.size() - 2];
        int y = current.back();
        
        for (auto& dir : directions) {
            int nx = x + dir[0];
            int ny = y + dir[1];
            
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> nextPath = path;
                nextPath.push_back(grid[nx][ny]);
                pq.push({nextPath.begin(), nextPath.end(), nx, ny});
            }
        }
    }
    
    return {};
}