vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(i == x) {
            for(int j = 0; j < lst[i].size() - 1; j++) {
                reverse(lst[i].begin() + j, lst[i].end());
            }
            for(int j = 0; j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}