bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings, string prefix){
    vector<vector<string>> result;
    for(auto s : strings){
        if(issame(s, filter_by_prefix({s}, prefix)))
            result.push_back(s);
    }
    return result;
}