bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings) {
    vector<vector<string>> result;
    for(auto &s : strings) {
        bool found = false;
        for(string str : s) {
            if(str.find(substring) != string::npos) {
                found = true;
                break;
            }
        }
        if(found)
            result.push_back(s);
    }
    return result;
}