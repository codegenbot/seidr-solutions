vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    queue<pair<vector<int>, int>> q;
    q.push({{0, 0}, 0});
    
    vector<vector<int>> dir = {{0, 1}, {1, 0}};
    
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        
        if (curr.first[0] == grid.size() - 1 && curr.first[1] == grid[0].size() - 1) {
            if (curr.second <= k && (result.empty() || curr.second < result.size())) {
                result = curr.first;
            }
            continue;
        }
        
        for (vector<int>& d : dir) {
            int next_x = curr.first[0] + d[0];
            int next_y = curr.first[1] + d[1];
            
            if (next_x < grid.size() && next_y < grid[0].size()) {
                vector<int> next = {next_x, next_y};
                int next_cost = curr.second + (issame(curr.first, next) ? 0 : 1);
                q.push({next, next_cost});
            }
        }
    }
    
    return result;
}