bool issame(vector<int> a, vector<int> b){
    if(a.size()!=b.size())
        return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return (a==b);
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto it = unique(result.begin(),result.end());
    result.erase(it,result.end());
    return result;
}