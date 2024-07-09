#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({1, {0, 0}});
    visited[0][0] = 1;

    vector<int> res;

    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (k == 0) break;

        for (int dx : {-1, 1, 0}) {
            for (int dy : {0, 0, -1, 1}) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = 1;
                    pq.push({grid[nx][ny], {nx, ny}});
                }
            }
        }

        res.push_back(val);
        k--;
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{5,9,3}, {4,1,6}, {7,8,2}};
    int k = 1;
    vector<int> result = minPath(grid, k);

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}