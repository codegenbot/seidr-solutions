bool issame(vector<string> a, vector<vector<string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(!issame(a[i], b[i])) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto s : strings){
        vector<string> temp;
        for(auto str : s) {
            if(str.find(substring) != string::npos)
                temp.push_back(str);
        }
        if(!temp.empty()) 
            result.push_back(temp);
    }
    return result;
}