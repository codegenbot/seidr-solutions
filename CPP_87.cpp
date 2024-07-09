vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> res;
    
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                res.push_back({i, j});
            }
        }
    }
    
    sort(res.begin(), res.end(), [](vector<int>& a, vector<int>& b){
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });
    
    return res;
}