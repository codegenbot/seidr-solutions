bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int row = 0, col = 0;
    vector<int> path;
    
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[row][col]);
        if ((row + col) % 2 == 0) {
            if (col == n - 1) {
                ++row;
            } else if (row == 0) {
                ++col;
            } else {
                --row;
                ++col;
            }
        } else {
            if (row == n - 1) {
                ++col;
            } else if (col == 0) {
                ++row;
            } else {
                ++row;
                --col;
            }
        }
    }
    
    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}