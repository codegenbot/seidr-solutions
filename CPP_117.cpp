bool issame(const vector<vector<pair<int, string>>> &a, const vector<vector<pair<int, string>>> &b) {
    if (a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        vector<pair<int, string>> v1 = a[i];
        vector<pair<int, string>> v2 = b[i];
        if(v1.size() != v2.size()) return false;
        for(int j = 0; j<v1.size(); j++){
            pair<int, string> p1 = v1[j];
            pair<int, string> p2 = v2[j];
            if(p1.first != p2.first || p1.second != p2.second) return false;
        }
    }
    return true;
}