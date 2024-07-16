vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(int i = 0; i < k; ++i){
        for(int j = 0; j < grid.size(); ++j){
            for(int num : grid[j]){
                result.push_back(num);
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