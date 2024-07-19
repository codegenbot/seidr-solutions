
vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    for (int i = 0; i < n; ++i) {
        path.push_back(grid[i][0]);
    }
    return path;
}

bool issame(vector<int> path1, vector<int> path2){
    return path1 == path2;
}

int main(){
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    vector<int> expected = {1, 4, 7};
    bool same = issame(result, expected);

    return 0;
}
