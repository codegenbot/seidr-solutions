bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> sorted_list_sum(const vector<string>& lst);

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result;
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}