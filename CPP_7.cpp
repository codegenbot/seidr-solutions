vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            bool issame = true;
            for(auto t : strings) {
                if(t != s && !t.find(substring)) {
                    issame = false; break;
                }
            }
            if(issame) result.push_back(s);
        }
    }
    return result;
}