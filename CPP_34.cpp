vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    for(int i = 0; i < (result.size() - 1); i++) {
        if(issame(vector<int>(result.begin()+i, result.begin()+(i+1)), unique(vector<int>(result.begin(), result.begin() + (i+1))))){
            result.erase(result.begin()+i);
            i--;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}