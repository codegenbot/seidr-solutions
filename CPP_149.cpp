bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) {
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
        if(!found) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    auto it = unique(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            return (a.length() % 2 != 0 && b.length() % 2 == 0) ||
                   (a.length() % 2 == 0 && b.length() % 2 != 0);
    });
    lst.erase(it, lst.end());
    sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() != b.length()) {
                return a.length() < b.length();
            } else {
                return a < b;
            }
        });
    return lst;
}