#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dir({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push({grid[i][j], i * n + j});
        }
    }
    vector<int> res;
    while (!pq.empty()) {
        int val, idx;
        tie(val, idx) = pq.top();
        pq.pop();
        res.push_back(val);
        if (res.size() == k) break;
        int x = idx / n, y = idx % n;
        for (int i = 0; i < 4; ++i) {
            int nx = x + dir[i][0], ny = y + dir[i][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                pq.push({grid[nx][ny], nx * n + ny});
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (auto x : res) cout << x << " ";
    return 0;
}