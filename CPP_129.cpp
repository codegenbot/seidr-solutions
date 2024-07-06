int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    queue<pair<int, int>> q;
    vector<int> res;
    if (grid[0][0] == k) res.push_back(k);
    q.push({0, 0});
    visited[0][0] = true;
    
    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();
        
        // for all directions
        for (int dx = -1; dx <= 1; ++dx) {
            for (int dy = -1; dy <= 1; ++dy) {
                if (abs(dx) + abs(dy) != 1) continue;
                
                int x = cur.first + dx, y = cur.second + dy;
                if (x < 0 || x >= n || y < 0 || y >= n)
                    continue;
                
                // check if this cell has value k
                if (grid[x][y] == k) {
                    res.push_back(k);
                    break;  // stop searching in this direction
                }
                
                if (!visited[x][y]) {
                    q.push({x, y});
                    visited[x][y] = true;
                }
            }
        }
    }
    
    return res;
}