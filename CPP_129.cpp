#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k);
bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    
    for (int i = 1; i < n; ++i) {
        grid[i][0] += grid[i - 1][0];
    }
    
    for (int j = 1; j < m; ++j) {
        grid[0][j] += grid[0][j - 1];
    }
    
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
    }
    
    int i = n - 1, j = m - 1;
    
    while (i > 0 || j > 0) {
        path.push_back(grid[i][j]);
        
        if (i > 0 && j > 0) {
            if (grid[i - 1][j] < grid[i][j - 1]) {
                --i;
            } else {
                --j;
            }
        } else if (i > 0) {
            --i;
        } else {
            --j;
        }
    }
    
    path.push_back(grid[0][0]);
    reverse(path.begin(), path.end());
    
    if (k <= path.size()) {
        path.resize(k);
    } 
    
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}