vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> res;
    for(int i = 0; i < lst.size(); i++){
        for(int j = 0; j < lst[i].size(); j++){
            if(lst[i][j] == x){
                res.push_back({i, j});
            }
        }
    }
    sort(res.begin(), res.end());
    for(auto &v : res){
        sort(v.begin(), v.end(), greater<int>());
    }
    return res;
}