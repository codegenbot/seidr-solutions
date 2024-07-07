#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                pq.push({0, {i, j}});
                visited[i][j] = 1;
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();

        if (k > 0) {
            res.push_back(val);
            k--;
        }

        vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto dir : dirs) {
            int ni = pos.first + dir.first;
            int nj = pos.second + dir.second;

            if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                visited[ni][nj] = 1;
                pq.push({val, {ni, nj}});
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    return 0;
}