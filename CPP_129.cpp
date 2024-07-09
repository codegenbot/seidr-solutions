#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct prior {
    int val;
    pair<int, int> pos;
};

priority_queue<prior> pq;

vector<vector<bool>> visited(1000, vector<bool>(1000, false));

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }

    vector<int> res;

    while (!pq.empty()) {
        int val = pq.top().val;
        int x = pq.top().pos.first;
        int y = pq.top().pos.second;
        res.push_back(val);
        pq.pop();

        if (k > 0) {
            --k;

            for (int dx : {-1, 0, 1}) {
                for (int dy : {-1, 0, 1}) {
                    int nx = x + dx;
                    int ny = y + dy;

                    if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        pq.push({grid[nx][ny], {nx, ny}});
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}