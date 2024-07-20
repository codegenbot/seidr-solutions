vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const string& a, const string& b) {
    return a.find(b) != string::npos;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const string& str : strings) {
        if (issame(str, substring)) {
            result.push_back(str);
        }
    }
    return result;
}