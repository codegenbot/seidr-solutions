bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    auto it = unique(result.begin(),result.end());
    while(it != result.end()) {
        bool isUnique = true;
        for(int i = 0; i < result.size(); i++) {
            if(i != 0 && issame(vector<int>(i,result[i]), vector<int>(0,1))) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    return result;
}