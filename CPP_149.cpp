bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> sorted_list_sum(const vector<string>& lst1, const vector<string>& lst2) {
    vector<string> lst = lst1;
    lst.insert(lst.end(), lst2.begin(), lst2.end());
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}

vector<string> res = sorted_list_sum(lst1, lst2);
assert(issame(res, {"apple", "banana", "cherry", "date", "grape"}));