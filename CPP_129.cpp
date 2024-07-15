bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    
    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = 0;

    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    queue<vector<int>> q;
    q.push({0, 0, 0});

    while (!q.empty()){
        vector<int> cur = q.front();
        q.pop();

        int x = cur[0];
        int y = cur[1];
        int cost = cur[2];

        if (x == rows - 1 && y == cols - 1){
            result.push_back(cost);
            continue;
        }

        for (auto dir : dirs){
            int nx = x + dir[0];
            int ny = y + dir[1];

            if (nx < 0 || ny < 0 || nx >= rows || ny >= cols){
                continue;
            }

            int new_cost = cost + grid[nx][ny];
            if (new_cost < dp[nx][ny] && new_cost <= k){
                dp[nx][ny] = new_cost;
                q.push({nx, ny, new_cost});
            }
        }
    }

    return result;
}