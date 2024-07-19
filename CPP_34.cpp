vector<int> unique(vector<int> l){
    vector<int> result(l.begin(),l.end());
    sort(result.begin(),result.end());
    vector<int>::iterator it;
    for(it=result.begin(); it!=--(result.end()); ++it) {
        if(it != result.begin() && *it == *(it-1)) {
            result.erase(it);
            --it;
        }
    }
    return result;
}
bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && a == b;
}