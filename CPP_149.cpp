bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]}).size() != 1) {
            return false;
        }
    }
    return true;
}