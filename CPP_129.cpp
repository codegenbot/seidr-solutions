#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({0, {0, 0}});
    visited[0][0] = true;

    vector<int> res;
    while (!pq.empty() && (int)res.size() < k) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        res.push_back(val);
        for (int dx : {-1, 0, 1}) {
            for (int dy : {-1, 0, 1}) {
                if (abs(dx) + abs(dy) != 1) continue;
                int nx = x + dx;
                int ny = y + dy;
                if (nx < 0 || nx >= N || ny < 0 || ny >= N || visited[nx][ny]) continue;
                visited[nx][ny] = true;
                pq.push({grid[nx][ny], {nx, ny}});
            }
        }
    }

    return res;
}