bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k);

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    for(const auto& row : grid){
        for(int i = 0; i < k; ++i){
            for(int ele : row){
                result.push_back(ele);
            }
        }
    }
    return result;
}