vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < grid.size(); ++i){
        for(int j = 0; j < grid[i].size(); ++j){
            for(int l = 0; l < k; ++l){
                result.push_back(grid[i][j]);
            }
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}