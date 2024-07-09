bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(string s : a) if(find(b.begin(), b.end(), s) == b.end()) return false;
    return true;
}