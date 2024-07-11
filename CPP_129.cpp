#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push({grid[i][j], {i, j}});
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();

        if (k > 0 && res.size() == k) break;

        visited[pos.first][pos.second] = 1;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int x = pos.first + i;
                int y = pos.second + j;

                if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                    pq.push({val, {x, y}});
                }
            }
        }

        res.push_back(val);
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}