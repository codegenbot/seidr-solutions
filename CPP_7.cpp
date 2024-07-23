vector<string> filter_by_substring(vector<string> strings, string substring){
    bool issame(vector<string> a, vector<string> b) {
        vector<string> same;
        for(string s : a) {
            if(b.find(s) != string::npos)
                same.push_back(s);
        }
        return same.size() == a.size();
    }

    vector<string> result;
    for(string s : strings) {
        if(issame({s}, {substring}) && s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}