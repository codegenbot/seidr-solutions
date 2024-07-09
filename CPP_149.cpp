bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> sorted_list = lst;
    sorted_list.erase(remove_if(sorted_list.begin(), sorted_list.end(), [](const string& s) { return s.length() % 2 != 0; }), sorted_list.end());
    sort(sorted_list.begin(), sorted_list.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return sorted_list;
}