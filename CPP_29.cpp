vector<string> filter_by_prefix(vector<string> strings, string prefix){
    bool issame(string s1, string s2) {
        for (int i = 0; i < min(s1.size(), s2.size()); i++) {
            if (s1[i] != s2[i])
                return false;
        }
        return true;
    }

    vector<string> result;
    for (const auto& str : strings) {
        if (issame(prefix, str.substr(0, prefix.size()))) {
            result.push_back(str);
        }
    }
    return result;
}