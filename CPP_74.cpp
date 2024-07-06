bool issame(const string& s1, const string& s2) {
    return s1.length() == s2.length();
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (lst1.empty()) return lst2;
    if (lst2.empty()) return lst1;

    bool same1 = false;
    for (const auto& str : lst1) {
        for (const auto& str2 : lst2) {
            if (issame(str, str2)) {
                same1 = true;
                break;
            }
        }
        if (same1) break;
    }

    if (same1) return lst1;
    else return lst2;
}