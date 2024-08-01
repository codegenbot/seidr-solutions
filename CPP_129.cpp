#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n, -1));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> , greater<> > pq;
    pq.push({0, {0, 0}});
    vector<int> res;

    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (visited[x][y] != -1) continue;
        visited[x][y] = 0;

        res.push_back(val);

        for (int dx : {-1, 0, 1}) {
            for (int dy : {-1, 0, 1}) {
                int nx = x + dx;
                int ny = y + dy;
                if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if (visited[nx][ny] != -1) continue;

                pq.push({val + grid[nx][ny], {nx, ny}});
            }
        }

        if (res.size() == k) break;
    }

    return res;
}