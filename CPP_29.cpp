bool issame(string s1, string s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i]) return false;
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(prefix, str.substr(0, prefix.size()))) {
            result.push_back(str);
        }
    }
    return result;
}