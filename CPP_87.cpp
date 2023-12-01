vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& v1, const vector<int>& v2){
        if(v1[0] != v2[0]){
            return v1[0] < v2[0];
        }
        return v1[1] > v2[1];
    });
    return result;
}