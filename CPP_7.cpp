bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for(auto str : a) {
        if (find(b.begin(), b.end(), str) == b.end()) return false;
    }
    return true;
}