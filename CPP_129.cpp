#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    vector<int> res;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                vector<int> path({grid[i][j]});
                pq.push(path);
            }
        }
    }

    while (!pq.empty()) {
        vector<int> path = pq.top();
        pq.pop();

        if (path.size() == k) {
            return path;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && (i == path.back() - 1 || j == path.back() % n)) {
                    visited[i][j] = true;
                    vector<int> newPath(path);
                    newPath.push_back(grid[i][j]);
                    pq.push(newPath);
                }
            }
        }
    }

    return {};
}