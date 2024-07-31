bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        for (const vector<int>& row : grid) {
            for (int num : row) {
                res.push_back(num);
            }
        }
    }
    return res;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}