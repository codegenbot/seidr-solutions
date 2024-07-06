bool issame(vector<string> a, vector<string> b1){
    if(a.size() != b1.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b1[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix1){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix1) == 0)
            result.push_back(s);
    }
    return result;
}