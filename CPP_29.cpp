vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool issame(vector<string> a, vector<vector<string>> b) {
    bool found = false;
    for(auto& vec : b) {
        if(issame(a, vec)) {
            found = true;
            break;
        }
    }
    return found;
}