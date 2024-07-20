#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = 1;
            }
        }
    }

    while (!pq.empty()) {
        pair<int, int> cur = pq.top().second;
        pq.pop();
        res.push_back(grid[cur.first][cur.second]);

        if (k > 0) {
            --k;

            // Check all neighbors
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int ni = cur.first + i;
                    int nj = cur.second + j;

                    if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                        pq.push({grid[ni][nj], {ni, nj}});
                        visited[ni][nj] = 1;
                    }
                }
            }
        } else {
            break;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}