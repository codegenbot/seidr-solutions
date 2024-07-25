vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto end = unique(result.begin(),result.end());
    result.erase(end,result.end());
    return result;
}