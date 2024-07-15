bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int m = grid.size();
    int n = grid[0].size();

    queue<pair<int, int>> q;
    q.push({0, 0});
    vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
    dist[0][0] = 0;

    vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (const auto& dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                int new_dist = dist[x][y] + (grid[nx][ny] == k ? 0 : 1);

                if (new_dist < dist[nx][ny]) {
                    dist[nx][ny] = new_dist;
                    q.push({nx, ny});
                }
            }
        }
    }

    if (dist[m - 1][n - 1] == INT_MAX) {
        return {};
    }

    int x = m - 1;
    int y = n - 1;
    path.push_back(grid[x][y]);

    while (x != 0 || y != 0) {
        for (const auto& dir : dirs) {
            int nx = x + dir[0];
            int ny = y + dir[1];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                if (dist[nx][ny] + (grid[x][y] == k ? 0 : 1) == dist[x][y]) {
                    x = nx;
                    y = ny;
                    path.push_back(grid[x][y]);
                    break;
                }
            }
        }
    }

    reverse(path.begin(), path.end());
    return path;
}