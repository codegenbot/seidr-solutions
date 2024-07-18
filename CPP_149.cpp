bool issame(vector<string> a, vector<string> b) {
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& s) {
        return sum + count(b.begin(), b.end(), s);
    }) == a.size();
}

vector<string> sorted_list_sum(vector<string> lst) {
    lst.erase(remove_if(lst.begin(), lst.end(), [](const string& s) { return s.length() % 2 != 0; }), lst.end());
    sort(lst.begin(), lst.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return lst;
}