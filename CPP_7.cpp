bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&](const string &s) { return find_all(b,s).size() > 0; });
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}