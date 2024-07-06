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
    if(n == 1)
        return vector<int>(1, grid[0][0]);
    
    if(k > n*n)
        return {};

    vector<bool> visited(n*n+1, false);
    vector<int> path;
    minPathHelper(grid, k, 0, path, visited);
    return path;
}

void minPathHelper(vector<vector<int>>& grid, int k, int pos, vector<int>& path, vector<bool>& visited) {
    if(path.size() == k) {
        cout << "Path: ";
        for (auto val : path)
            cout << val << " ";
        cout << endl;
        return;
    }
    
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[0].size(); j++) {
            int idx = i*grid[0].size() + j;
            if(!visited[idx] && path.empty() || grid[i][j] == path.back()+1) {
                visited[idx] = true;
                path.push_back(grid[i][j]);
                minPathHelper(grid, k, idx+1, path, visited);
                path.pop_back();
                visited[idx] = false;
            }
        }
    }
}