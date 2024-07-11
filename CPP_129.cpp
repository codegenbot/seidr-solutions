bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                dfs(grid, visited, i, j, k, &res);
            }
        }
    }

    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* res) {
    if (k == 0) {
        (*res).insert((*res).end(), grid[x].begin(), grid[x].end());
        return;
    }

    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if ((i == 0 || j == 0) && abs(i) + abs(j) == 1) { // only consider the four neighbors
                int newX = x + i;
                int newY = y + j;

                if (newX >= 0 && newX < grid.size() && newY >= 0 && newY < grid[0].size()) {
                    if (!visited[newX][newY]) {
                        visited[newX][newY] = true;
                        (*res).push_back(grid[newX][newY]);
                        dfs(grid, visited, newX, newY, k - 1, res);
                        visited[newX][newY] = false; // backtracking
                    }
                }
            }
        }
    }
}