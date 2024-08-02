vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos) {
            bool issame = true;
            for(string t : strings) {
                if(t.find(substring) == string::npos && !issame) break;
                if(t.find(substring) != string::npos) {
                    issame = false;
                }
            }
            if(issame) result.push_back(s);
        }
    }
    return result;
}