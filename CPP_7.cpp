vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const string& str, const string& substring) {
    return str.find(substring) != string::npos;
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