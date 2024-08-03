bool issame(string a, string b) {
    if (a.length() != b.length()) return false;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& str : strings) {
        if (issame(prefix, str.substr(0, prefix.length()))) {
            result.push_back(str);
        }
    }
    return result;
}