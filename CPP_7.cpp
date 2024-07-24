bool issame(vector<string> a, vector<string> b) {
    bool result = true;
    if (a.size() != b.size()) {
        result = false;
    } else {
        for (int i = 0; i < a.size(); i++) {
            if (!(a[i] == b[i])) {
                result = false;
                break;
            }
        }
    }
    return result;
}