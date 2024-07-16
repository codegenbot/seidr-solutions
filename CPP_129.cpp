vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    for(int i = 0; i < k; ++i){
        for(int j = 0; j < grid.size(); ++j){
            for(int l = 0; l < grid[j].size(); ++l){
                path.push_back(grid[j][l]);
            }
        }
    }
    return path;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}