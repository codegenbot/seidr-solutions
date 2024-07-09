bool issame(vector<int> a, vector<int> b){
    return (a[0] == b[0] && a[1] == b[1]);
}

vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int minPathHelper(vector<vector<int>>& grid, vector<int> start, vector<int> end, int k, vector<vector<bool>>& visited, int steps){
    if (start == end) return steps;
    
    visited[start[0]][start[1]] = true;
    
    int min_steps = INT_MAX;
    
    for (auto& dir : directions){
        int new_r = start[0] + dir[0];
        int new_c = start[1] + dir[1];
        
        if (new_r >= 0 && new_r < grid.size() && new_c >= 0 && new_c < grid[0].size() && grid[new_r][new_c] <= k && !visited[new_r][new_c]){
            int curr_steps = minPathHelper(grid, {new_r, new_c}, end, k, visited, steps + 1);
            if (curr_steps < min_steps){
                min_steps = curr_steps;
            }
        }
    }
    
    visited[start[0]][start[1]] = false;
    
    return min_steps;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> start = {0, 0};
    vector<int> end = {grid.size() - 1, grid[0].size() - 1};
    
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    
    int steps = minPathHelper(grid, start, end, k, visited, 0);
    
    if (steps == INT_MAX) return {-1};
    
    return {steps};
}

int main(){
    // Your testing code here
    return 0;
}