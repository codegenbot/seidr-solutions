vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(const string& s1, const string& s2) {
    return s1 == s2;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}