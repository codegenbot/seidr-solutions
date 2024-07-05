#include <vector>
#include <queue>
#include <tuple>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<int> result(k, INT_MAX);
    
    auto cmp = [](const vector<int>& a, const vector<int>& b) {
        return a > b; // lexicographical comparison
    };
    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({grid[i][j], i, j});
        }
    }
    
    while (!pq.empty()) {
        vector<int> current = pq.top();
        pq.pop();
        if (current.size() == k + 2) {
            vector<int> path(current.begin(), current.begin() + k);
            if (path < result) {
                result = path;
            }
            continue;
        }
        int x = current[current.size() - 2];
        int y = current[current.size() - 1];
        for (auto& d : directions) {
            int nx = x + d[0];
            int ny = y + d[1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> next = current;
                next.push_back(grid[nx][ny]);
                next.push_back(nx);
                next.push_back(ny);
                pq.push(next);
            }
        }
    }
    
    return result;
}