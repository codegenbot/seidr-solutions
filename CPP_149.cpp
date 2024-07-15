bool issame(vector<string> a, vector<string> b) {
    return accumulate(a.begin(), a.end(), 0, [](int sum, const string& s) {
        return sum + stoi(s);
    }) == accumulate(b.begin(), b.end(), 0, [](int sum, const string& s) {
        return sum + stoi(s);
    });
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> res = lst;
    sort(res.begin(), res.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return res;
}