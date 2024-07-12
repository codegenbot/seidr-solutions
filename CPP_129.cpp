```
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Cell {
    int val;
    pair<int, int> pos;

    bool operator>(const Cell& other) const {
        return val > other.val;
    }
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                Cell cell = {grid[i][j], {i, j}};
                pq.push(cell);
                visited[i][j] = true;
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().val;
        pair<int, int> pos = pq.top().pos;
        res.push_back(val);
        pq.pop();

        if (k > 0) {
            --k;

            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = pos.first + i;
                    int nj = pos.second + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                        Cell cell = {grid[ni][j], {ni, nj}};
                        pq.push(cell);
                        visited[ni][nj] = true;
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}