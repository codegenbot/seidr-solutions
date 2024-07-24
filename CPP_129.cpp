Here is the completed code:

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size()));
    priority_queue<pair<long long, vector<int>>, vector<pair<long long, vector<int>>>>
        pq({{1, {grid[0][0]}}});
    set<vector<int>> st;
    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if ((i == 0 && j == 0) || i + grid.size() * (j ? (j > 0) : 1) >= grid.size()
                    || i + grid[0].size() * (i != 0) < 0)
                    continue;
                int x = cur.second.back(), y = i, z = j;
                if (x == grid[x][y] && !visited[y][x]) {
                    vector<int> v(cur.second);
                    v.push_back(grid[x][y]);
                    visited[y][x] = true;
                    pq.emplace(-1LL * v.size() * 1000 + v.back(), v);
                    st.insert(v);
                }
            }
        }
    }
    vector<int> res = *(st.begin());
    for (int i = k; i > 0; i--) {
        int j = 0;
        while (j < res.size() && res[j] == res.back()) {
            j++;
        }
        if (j >= res.size()) break;
        res.resize(j);
        break;
    }
    return res;
}