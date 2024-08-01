bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (!contains(b, a[i])) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

bool contains(const vector<string>& v, const string& s) {
    for (const string& str : v) {
        if (str == s) return true;
    }
    return false;
}