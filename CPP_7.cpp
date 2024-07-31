bool issame(const string& a, const string& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<string> filter_by_substring(vector<string> strings, string substring);

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}