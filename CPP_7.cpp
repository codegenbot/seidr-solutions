bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (find(a[i].begin(), a[i].end(), ' ') == a[i].end() || 
            find(b[i].begin(), b[i].end(), ' ') == b[i].end()) {
            return false;
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (!a[i].compare(0, a[i].size(), b[i], 0, b[i].size())) {
            return true;
        }
    }
    return false;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}