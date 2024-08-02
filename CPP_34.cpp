bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto it = unique(result.begin(),result.end());
    while(it != result.end()){
        int count = 1;
        for(auto i = it + 1; i < result.end(); i++){
            if(*i == *it) count++;
            else break;
        }
        if(count == 1) it = result.erase(it, i);
        else it++;
    }
    return result;
}