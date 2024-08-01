bool issame(vector<string> a,vector<string>b){
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&b](string s) {return find(b.begin(), b.end(), s) != b.end();}));
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0 && all_of(split(str, ' '), [&prefix](string s) {return s.find(prefix) == 0;}))
            result.push_back(str);
    }
    return result;
}

vector<string> split(const string &s, char delim) {
    vector<string> result;
    size_t pos = 0;
    while ((pos = s.find(delim)) != string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    result.push_back(s);
    return result;
}