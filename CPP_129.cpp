vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 1) {
                dfs(grid, visited, i, j, k, &res);
                break;
            }
    return res;

}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int x, int y, int k, vector<int>* res) {
    if (k == 0)
        return;
    visited[x][y] = true;
    (*res).push_back(grid[x][y]);
    for (int dx = -1; dx <= 1; ++dx)
        for (int dy = -1; dy <= 1; ++dy) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()
                && !visited[nx][ny] && grid[nx][ny] != (*res).back()) {
                dfs(grid, visited, nx, ny, k - 1, res);
                return;
            }
        }
    visited[x][y] = false;

}

bool issame(vector<int> a, vector<int> b) {
    return a == b;

}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>(1,3,1,3,1,3,1,3,1,3)));
    return 0;
}