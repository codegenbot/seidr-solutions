vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto it = unique(result.begin(),result.end());
    result.erase(it,result.end());
    return result;
}