vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto end_unique = unique_copy(result.begin(), result.end(), result.begin());
    result.erase(end_unique, result.end());
    return result;
}