bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        bool match = false;
        for (const auto& str : filter_by_substring({a[i], b[i]}, " ")) {
            if (str.find(" ") == string::npos) {
                match = true;
                break;
            }
        }
        if (!match) {
            return false;
        }
    }
    return true;
}