vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}
bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}