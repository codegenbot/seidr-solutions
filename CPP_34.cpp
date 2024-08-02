```cpp
vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto it = unique(result.begin(),result.end());
    result.erase(it,result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i])
            return false;
    return true;
}