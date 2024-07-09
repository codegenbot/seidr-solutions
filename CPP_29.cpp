bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (issame(a[i], b[i])) return false;
    }
    return true;
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings, string prefix){
    vector<vector<string>> result;
    for (const auto& str : strings) {
        if (issame(str, vector<string>({prefix})))
            result.push_back(str);
    }
    return result;
}