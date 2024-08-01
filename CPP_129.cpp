#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }

    vector<int> res;
    while (!pq.empty() && k--) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();
        res.push_back(val);
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (abs(i) + abs(j) == 1 && pos.first + i >= 0 && pos.second + j >= 0 && pos.first + i < n && pos.second + j < n && !visited[pos.first + i][pos.second + j]) {
                    pq.push({grid[pos.first + i][pos.second + j], {pos.first + i, pos.second + j}});
                    visited[pos.first + i][pos.second + j] = true;
                }
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}