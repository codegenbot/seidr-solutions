vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i = 0; i < lst.size(); i++){
        if(lst[i].size() > 0 && lst[i][x-1] == x){
            vector<int> temp;
            for(int j = lst[i].size()-1; j >= 0; j--){
                temp.push_back({i, j});
            }
            result.insert(result.end(), temp.begin(), temp.end());
        }
    }
    return result;
}