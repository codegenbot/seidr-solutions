bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        bool found = false;
        for(string s : b) {
            if(s == a[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}